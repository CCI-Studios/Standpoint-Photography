(function($) {
	$(function () {
		$(".home-image .zoom").click(function()
		{
			console.log($(this).attr("data-rel"));
			//$.colorbox({rel:$(this).attr("data-rel"), open:true});
			$("a[rel="+$(this).attr("data-rel")+"]").colorbox({open:true, maxWidth:"100%", maxHeight:"100%"});
			return false;
		});
	});
}(jQuery));