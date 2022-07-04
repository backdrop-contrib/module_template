/**
 * @file
 * Custom javascript for the MyModule module.
 */

(function($) {
  Backdrop.behaviors.myModule = {
    attach: function(context, settings) {

      console.log('Hello world!');

    }
  };
})(jQuery);
