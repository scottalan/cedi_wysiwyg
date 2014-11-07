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
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'Strike' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'JustifyBlock' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'TextColor' => 1,
          'BGColor' => 1,
          'Source' => 1,
          'PasteText' => 1,
          'Font' => 1,
          'FontSize' => 1,
          'Styles' => 1,
          'Replace' => 1,
          'SpellChecker' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 1,
      'acf_mode' => 2,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_path' => '%b%t/ckeditor.css',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-output',
      'forcePasteAsPlainText' => 0,
    ),
  );

  return $profiles;
}
