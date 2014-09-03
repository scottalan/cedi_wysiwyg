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
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 1,
      'theme' => '',
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
          'Image' => 1,
          'TextColor' => 1,
          'BGColor' => 1,
          'Source' => 1,
          'Cut' => 1,
          'Copy' => 1,
          'Paste' => 1,
          'ShowBlocks' => 1,
          'RemoveFormat' => 1,
          'SpecialChar' => 1,
          'Format' => 1,
          'Font' => 1,
          'FontSize' => 1,
          'Styles' => 1,
          'Flash' => 1,
          'CreateDiv' => 1,
          'Iframe' => 1,
          'Scayt' => 1,
          'Templates' => 1,
        ),
        'drupal' => array(
          'media' => 1,
          'break' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 1,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'self',
      'css_path' => '%bsites/all/modules/features/cedi_wysiwyg/ckeditor/ckeditor.css',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-basic',
      'forcePasteAsPlainText' => 1,
    ),
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
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Strike' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'JustifyBlock' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Indent' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'RemoveFormat' => 1,
          'SpecialChar' => 1,
          'Font' => 1,
          'FontSize' => 1,
          'Styles' => 1,
          'CreateDiv' => 1,
          'Scayt' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 1,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'self',
      'css_path' => '%b%t/ckeditor.css',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-paste',
      'forcePasteAsPlainText' => 1,
    ),
  );

  return $profiles;
}
