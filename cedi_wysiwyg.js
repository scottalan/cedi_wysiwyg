(function($) {

  // On Document load.
  $(function() {

    // Make every link included in the body field for wysiwyg open in a new
    // tab or window.
    $('.body.field a').attr('target', '_blank');

  });

})(jQuery);
