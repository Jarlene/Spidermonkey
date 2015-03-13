/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */
"use strict";

dump("### PluginHelper.js loaded\n");

/**
 * Handle events generated by plugin click-to-play code.
 *
 * This "PluginBindingAttached" fires when a "pluginProblem" XBL binding is
 * created.  This binding overlays plugin content when the plugin is missing,
 * blocked, click-to-play, or replaced by a "preview" extension plugin like
 * Shumway or PDF.js.
 */
var PluginHelper = {
  init: function () {
    addEventListener("PluginBindingAttached", this, true, true);
  },

  handleEvent: function handleEvent(aEvent) {
    switch (aEvent.type) {
      case "PluginBindingAttached":
        this.handlePluginBindingAttached(aEvent);
        break;
    }
  },

  getPluginMimeType: function (plugin) {
    var tagMimetype = plugin.actualType;

    if (tagMimetype == "") {
      tagMimetype = plugin.type;
    }
    return tagMimetype;
  },

  handlePluginBindingAttached: function (aEvent) {
    let plugin = aEvent.target;
    let doc = plugin.ownerDocument;
    let overlay = doc.getAnonymousElementByAttribute(plugin, "anonid", "main");
    if (!overlay || overlay._bindingHandled) {
      return;
    }
    overlay._bindingHandled = true;

    let eventType = PluginHelper._getBindingType(plugin);
    if (!eventType) {
      return;
    }

    switch  (eventType) {
      case "PluginPlayPreview": {
        // Load the "preview" handler (an extension plugin like Shumway or PDF.js).
        let previewContent = doc.getAnonymousElementByAttribute(plugin, "class", "previewPluginContent");
        let pluginHost = Cc["@mozilla.org/plugin/host;1"].getService(Ci.nsIPluginHost);
        let mimeType = PluginHelper.getPluginMimeType(plugin);
        let playPreviewInfo = pluginHost.getPlayPreviewInfo(mimeType);

        let iframe = previewContent.getElementsByClassName("previewPluginContentFrame")[0];
        if (!iframe) {
          // lazy initialization of the iframe
          iframe = doc.createElementNS("http://www.w3.org/1999/xhtml", "iframe");
          iframe.className = "previewPluginContentFrame";
          previewContent.appendChild(iframe);
        }
        iframe.src = playPreviewInfo.redirectURL;
        break;
      }

      case "PluginNotFound": {
        // TODO: Display a message about missing plugins (bug 936907)
        break;
      }
    }
  },

  // Helper to get the binding handler type from a plugin object
  _getBindingType: function(plugin) {
    if (!(plugin instanceof Ci.nsIObjectLoadingContent))
      return null;

    switch (plugin.pluginFallbackType) {
      case Ci.nsIObjectLoadingContent.PLUGIN_UNSUPPORTED:
        return "PluginNotFound";
      case Ci.nsIObjectLoadingContent.PLUGIN_PLAY_PREVIEW:
        return "PluginPlayPreview";
      default:
        // Metro Firefox does not yet support other fallback types.
        return null;
    }
  },
};

PluginHelper.init();
