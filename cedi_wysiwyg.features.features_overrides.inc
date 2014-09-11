<?php
/**
 * @file
 * cedi_wysiwyg.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cedi_wysiwyg_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: filter
  $overrides["filter.panopoly_html_text.weight"] = -8;
  $overrides["filter.panopoly_wysiwyg_text.weight"] = -9;

  // Exported overrides for: wysiwyg

 return $overrides;
}
