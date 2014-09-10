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
    $data['panopoly_html_text']['cache'] = 0; /* WAS: 1 */
    $data['panopoly_html_text']['filters']['filter_svg_embed'] = array(
      'settings' => array(),
      'status' => 1,
      'weight' => 0,
    ); /* WAS: '' */
    $data['panopoly_html_text']['filters']['wysiwyg']['settings']['valid_elements'] = 'a[!href|target<_blank|title|style|class],
        div[style|class|align<center?justify?left?right],
        br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
        span[style],p[style|class],
        h1[style|class],h2[style|class],h3[style|class],h4[style|class],h5[style|class],h6[style|class],
        img[!src|title|alt|style|width|height|class|hspace|vspace],
        @[style|class|role|tabindex|aria-activedescendant|aria-atomic|aria-autocomplete|aria-busy|aria-checked|aria-controls|aria-describedby|aria-disabled|aria-dropeffect|aria-expanded|aria-flowto|aria-grabbed|aria-haspopup|aria-hidden|aria-invalid|aria-label|aria-labelledby|aria-level|aria-live|aria-multiline|aria-multiselectable|aria-owns|aria-posinset|aria-pressed|aria-readonly|aria-relevant|aria-required|aria-selected|aria-setsize|aria-sort|aria-valuemax|aria-valuemin|aria-valuenow|aria-valuetext]'; /* WAS: 'a[!href|target<_blank|title|style|class],
    div[style|class|align<center?justify?left?right],
    br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
    span[style],p[style|class],
    h1[style|class],h2[style|class],h3[style|class],h4[style|class],h5[style|class],h6[style|class],
    img[!src|title|alt|style|width|height|class|hspace|vspace],
    @[style|class|role|tabindex|aria-activedescendant|aria-atomic|aria-autocomplete|aria-busy|aria-checked|aria-controls|aria-describedby|aria-disabled|aria-dropeffect|aria-expanded|aria-flowto|aria-grabbed|aria-haspopup|aria-hidden|aria-invalid|aria-label|aria-labelledby|aria-level|aria-live|aria-multiline|aria-multiselectable|aria-owns|aria-posinset|aria-pressed|aria-readonly|aria-relevant|aria-required|aria-selected|aria-setsize|aria-sort|aria-valuemax|aria-valuemin|aria-valuenow|aria-valuetext]' */
  }
}
