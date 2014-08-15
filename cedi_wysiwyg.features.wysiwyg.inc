<?php
/**
 * @file
 * cedi_wysiwyg.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function cedi_wysiwyg_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: admin
  $profiles['admin'] = array(
    'format' => 'admin',
    'editor' => 'ckeditor',
    'settings' => FALSE,
  );

  // Exported profile: editor
  $profiles['editor'] = array(
    'format' => 'editor',
    'editor' => 'ckeditor',
    'settings' => FALSE,
  );

  // Exported profile: panopoly_html_text
  $profiles['panopoly_html_text'] = array(
    'format' => 'panopoly_html_text',
    'editor' => 'markitup',
    'settings' => array(
      'default' => 0,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'stroke' => 1,
          'link' => 1,
        ),
      ),
      'css_setting' => 'theme',
      'css_path' => '',
      'advanced__active_tab' => 'edit-basic',
    ),
  );

  return $profiles;
}
