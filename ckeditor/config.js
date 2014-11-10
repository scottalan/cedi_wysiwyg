/**
 * @license Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
 * For licensing, see LICENSE.html or http://ckeditor.com/license
 */
(function($) {
  $baseUrl = document.location.origin;

})(jQuery);

// Removes spaces in empty tags. e.g., <p>&nbsp;</p>.
CKEDITOR.config.fillEmptyBlocks = false;

// Define changes to default configuration here. For example:
// CKEDITOR.config.language = 'fr';
CKEDITOR.config.baseHref = $baseUrl;
// This is the color of the editor.
CKEDITOR.config.uiColor = '#e2861d'; // #AADC6E
CKEDITOR.config.enterMode = CKEDITOR.ENTER_BR;
CKEDITOR.config.shiftEnterMode = CKEDITOR.ENTER_P;
CKEDITOR.config.ignoreEmptyParagraph = true;
//CKEDITOR.config.scayt_autoStartup = true;
CKEDITOR.config.disableNativeSpellChecker = false;

// This fires when text is pasted into ckeditor. Seems that the "Apply simple
// source fomatting" setting @admin/config/content/wysiwyg/profile/[PROFILE]/edit
// does a good job but leaving this here as an example of things we can do.
/*CKEDITOR.on('instanceReady', function(ev) {
  ev.editor.on('paste', function(evt) {

     // Examples:
     // Not sure this actually works.
     evt.data.dataValue = evt.data.dataValue.replace(/&nbsp;/g,'');
     // remove font-family, font-size, line-height, background-color, color from style
     evt.data.dataValue = evt.data.dataValue.replace(/font-family\:[^;]+;?|font-size\:[^;]+;?|line-height\:[^;]+;?|background-color\:[^;]+;?|color\:[^;]+;?/g, '');
     // remove if style is empty, e.g. style="" || style="   "
     evt.data.dataValue = evt.data.dataValue.replace(/style\="\s*?"/, '');
     // remove empty tags, e.g. <p></p>
     evt.data.dataValue = evt.data.dataValue.replace(/<[^\/>][^>]*><\/[^>]+>/, '');
     //remove all styles from tags
     evt.data.dataValue = evt.data.dataValue.replace(/(<[^>]+) style=".*?"/i, '');
     // Remove empty p tags.
     evt.data.dataValue = evt.data.dataValue.replace(/<p><\/p>/g,'');
     // Remove empty p tags with spaces in them.
     evt.data.dataValue = evt.data.dataValue.replace(/<p>&nbsp;<\/p>/g,'');
     // Remove span styles.
     evt.data.dataValue = evt.data.dataValue.replace(/<span[^>]*>([\s\S]*?)/g,'<span>');
     // Remove p styles.
     evt.data.dataValue = evt.data.dataValue.replace(/<p[^>]*>([\s\S]*?)/g,'<p>');
     // Remove div styles.
     evt.data.dataValue = evt.data.dataValue.replace(/<div[^>]*>([\s\S]*?)/g,'<div>');
     // Remove margin-bottom styles.
     evt.data.dataValue = evt.data.dataValue.replace(/style="margin-bottom:.+"/g,'');
     // Remove font face styling.
     evt.data.dataValue = evt.data.dataValue.replace(/<font face=".+">/g,'');
     // Remove closing font tag.
     evt.data.dataValue = evt.data.dataValue.replace(/<\/font>/g,'');

    // Log the output to console.
    console.log(evt.data.dataValue);
  }, null, null, 9);
});*/

/*
  Examples:

 CKEDITOR.config.allowedContent = {
 "div h1 h2 h3 h4 h5 h6 ol p pre ul em": {
 propertiesOnly: !0,
 styles: !a ? "font-size,background-color" : null
 }
 }

 CKEDITOR.config.disallowedContent =
 // Don't allow background colors on text.
 '*{background*}';

 Extra Plugins:
 CKEDITOR.plugins.addExternal('colorbutton', 'plugins/colorbutton/', 'plugin.js');
 CKEDITOR.config.extraPlugins = 'colorbutton';
 CKEDITOR.config.extraPlugins = 'image2';
 */

// Font and Font background Colors
//
// logo-grey, logo-orange
CKEDITOR.config.colorButton_colors = '404041,F05A28,000000,FFFFFF';

// Styles
CKEDITOR.config.format_tags = 'h1;h2;h3;h4;h5;h6'
CKEDITOR.stylesSet.add('cedi_styles', [ /* Block Styles */

  // These styles are already available in the "Format" combo ("format" plugin),
  // so they are not needed here by default. You may enable them to avoid
  // placing the "Format" combo in the toolbar, maintaining the same features.
  /*
   { name: 'Paragraph',		element: 'p' },
   { name: 'H 1',		element: 'h1' },
   { name: 'H 2',		element: 'h2' },
   { name: 'H 3',		element: 'h3' },
   { name: 'H 4',		element: 'h4' },
   { name: 'H 5',		element: 'h5' },
   { name: 'H 6',		element: 'h6' },
   { name: 'Preformatted Text',element: 'pre' },
   { name: 'Address',			element: 'address' },
   */

  { name: 'Paragraph',		element: 'p' },
  { name: 'H1',		element: 'h1' },
  { name: 'H2',		element: 'h2' },
  { name: 'H3',		element: 'h3' },
  { name: 'H4',		element: 'h4' },
  { name: 'H5',		element: 'h5' },
  { name: 'H6',		element: 'h6' },

  { name: 'Italic Title',		element: 'h2', styles: { 'font-style': 'italic' } },
  { name: 'Subtitle',			element: 'h3', styles: { 'color': '#aaa', 'font-style': 'italic' } },
  {
    name: 'Special Container',
    element: 'div',
    styles: {
      padding: '5px 10px',
      background: '#eee',
      border: '1px solid #ccc'
    }
  },

  /* Inline Styles */

  // Custom
  { name: 'Orange Text', element: 'span', styles: { 'color': '#F05A28' } },

  // These are core styles available as toolbar buttons. You may opt enabling
  // some of them in the Styles combo, removing them from the toolbar.
  // (This requires the "stylescombo" plugin)
  /*
   { name: 'Strong',			element: 'strong', overrides: 'b' },
   { name: 'Emphasis',			element: 'em'	, overrides: 'i' },
   { name: 'Underline',		element: 'u' },
   { name: 'Strikethrough',	element: 'strike' },
   { name: 'Subscript',		element: 'sub' },
   { name: 'Superscript',		element: 'sup' },
   */

  { name: 'Marker',			element: 'span', attributes: { 'class': 'marker' } },

  { name: 'Big',				element: 'big' },
  { name: 'Small',			element: 'small' },
  { name: 'Typewriter',		element: 'tt' },

  { name: 'Computer Code',	element: 'code' },
  { name: 'Keyboard Phrase',	element: 'kbd' },
  { name: 'Sample Text',		element: 'samp' },
  { name: 'Variable',			element: 'var' },

  { name: 'Deleted Text',		element: 'del' },
  { name: 'Inserted Text',	element: 'ins' },

  { name: 'Cited Work',		element: 'cite' },
  { name: 'Inline Quotation',	element: 'q' },

  { name: 'Language: RTL',	element: 'span', attributes: { 'dir': 'rtl' } },
  { name: 'Language: LTR',	element: 'span', attributes: { 'dir': 'ltr' } },

  /* Object Styles */

  {
    name: 'Styled image (left)',
    element: 'img',
    attributes: { 'class': 'left' }
  },

  {
    name: 'Styled image (right)',
    element: 'img',
    attributes: { 'class': 'right' }
  },

  {
    name: 'Compact table',
    element: 'table',
    attributes: {
      cellpadding: '5',
      cellspacing: '0',
      border: '1',
      bordercolor: '#ccc'
    },
    styles: {
      'border-collapse': 'collapse'
    }
  },

  { name: 'Borderless Table',		element: 'table',	styles: { 'border-style': 'hidden', 'background-color': '#E6E6FA' } },
  { name: 'Square Bulleted List',	element: 'ul',		styles: { 'list-style-type': 'square' } }
]);

// Set the new style set.
CKEDITOR.config.stylesSet = 'cedi_styles';

// Fonts
//
// Font Options
CKEDITOR.config.font_names = 'Raleway/Raleway;' + CKEDITOR.config.font_names;

// Font Sizes
CKEDITOR.config.fontSize_sizes = 'normalize/1rem;' + CKEDITOR.config.fontSize_sizes;

/*
  Examples:

 CKEDITOR.config.font_style =
 {
 element		: 'span',
 styles		: { 'font-family' : '#(family)' },
 overrides	: [ { element : 'font', attributes : { 'face' : null } } ]
 };

 CKEDITOR.config.fontSize_style =
 {
 element		: 'span',
 styles		: { 'font-size' : '#(size)' },
 overrides	: [ { element : 'font', attributes : { 'size' : null } } ]
 };

 CKEDITOR.config.font_defaultLabel = 'Normal';
 CKEDITOR.config.fontSize_defaultLabel = '16px';

 CKEDITOR.contentsCss = 'font.css';
 */

