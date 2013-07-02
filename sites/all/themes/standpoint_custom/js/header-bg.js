(function($) {
	$(function () {
		$("#header-background").css(
			"background-image", "url("+$("#header-background [data-bg]").attr("data-bg")+")"
		);
	});
}(jQuery));