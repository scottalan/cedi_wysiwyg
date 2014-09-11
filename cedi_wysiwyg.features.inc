<?php
/**
 * @file
 * cedi_wysiwyg.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cedi_wysiwyg_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_filter_default_formats_alter().
 */
function cedi_wysiwyg_filter_default_formats_alter(&$data) {
  if (isset($data['panopoly_html_text'])) {
    $data['panopoly_html_text']['weight'] = -8; /* WAS: -9 */
  }
  if (isset($data['panopoly_wysiwyg_text'])) {
    $data['panopoly_wysiwyg_text']['weight'] = -9; /* WAS: -10 */
  }
}
