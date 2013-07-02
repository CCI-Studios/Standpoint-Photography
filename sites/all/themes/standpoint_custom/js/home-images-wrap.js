(function($) {
	$(function() {
		$("#block-views-home-image-2-home-image-2, #block-views-home-image-3-home-image-3, #block-views-home-image-4-home-image-4")
		.wrapAll("<div class='home-images-center' />");

		$("#block-views-song-of-the-week-block, #block-views-projects-block")
		.wrapAll("<div class='widgets-center' />");
	});
}(jQuery));