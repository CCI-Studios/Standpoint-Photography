(function($) {
	$(function () {
		$(".play.youtube").click(function(){
			var youtube_id = $(this).attr("data-youtube");
			var width = $(this).width();
			var height = $(this).height();
			$(this).parent().find("img").css({"margin-bottom":"40px"});
			$(this).wrap('<iframe width="'+width+'" height="220" src="http://www.youtube.com/embed/'+youtube_id+'?autoplay=1" frameborder="0" allowfullscreen></iframe>');
		});
	});
}(jQuery));