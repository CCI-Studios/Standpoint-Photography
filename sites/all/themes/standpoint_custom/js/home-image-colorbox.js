(function($) {
	$(function () {
		$(".home-image .zoom").click(function()
		{
			$(this).parent().parent().parent().find(".colorbox").colorbox({open:true});
			
			return false;
		});
	});
}(jQuery));