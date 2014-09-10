<?php
/**
 * @file
 * cedi_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function cedi_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Admin.
  $formats['admin'] = array(
    'format' => 'admin',
    'name' => 'Admin',
    'cache' => 1,
    'status' => 0,
    'weight' => -10,
    'filters' => array(
      'image_resize_filter' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 'remote',
          ),
        ),
      ),
      'filter_url' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'media_filter' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
      'caption_filter' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Editor.
  $formats['editor'] = array(
    'format' => 'editor',
    'name' => 'Editor',
    'cache' => 0,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'image_resize_filter' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'filter_url' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'media_filter' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'caption_filter' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_svg_embed' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -7,
    'filters' => array(),
  );

  return $formats;
}
