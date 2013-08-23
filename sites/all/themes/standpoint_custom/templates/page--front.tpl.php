<div id="header-background">
  <?php print render($page['header_bg']); ?>
</div>
<div id="header-background-mask"></div>


<div id="page-wrapper"><div id="page">


	<div class="nav">
		<div class="nav_wrap clearfix">
			<?php print render($page['nav_menu']); ?>
      <a class="open-nav" href="#"></a>
		</div>
	</div>

  <div class="header">
    <div class="header_wrap clearfix">
      <img src="/sites/all/themes/standpoint_custom/images/icon-slogan.png" alt="Where Do You Stand?" />
      <?php print render($page['header']); ?>
    </div>
  </div>

  <div class="widgets">
    <div class="widgets_wrap clearfix">
      <?php print render($page['widgets']); ?>
    </div>
  </div>


  <?php if ($messages): ?>
    <div id="messages"><div class="section clearfix">
      <?php print $messages; ?>
    </div></div> <!-- /.section, /#messages -->
  <?php endif; ?>

  <div id="main-wrapper" class="clearfix"><div id="main" class="clearfix">
    <div id="content" class="column"><div class="section">
      <a id="main-content"></a>
      <?php if ($title): ?>
    <div class="title_box clearfix">
        <h1 class="title" id="page-title">
          <?php print $title; ?>
        </h1>
    <div class="title_img"></div>
    </div>
      <?php endif; ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links">
          <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>

    </div></div> <!-- /.section, /#content -->

  </div></div> <!-- /#main, /#main-wrapper -->
</div></div> <!-- /#page, /#page-wrapper -->

  <div class="footer">
    <div class="footer_wrap">
      <div class="footer_top">
        <?php print render($page['footer']); ?>
      </div>
      <div class="footer_bot">
        <?php print render($page['footer_bottom']); ?>
      
        <div class="copyright">
        &copy; StandPoint Photography <?php echo date('Y'); ?>
        </div>
        <div class="site-by-cci">Site by <a href="http://ccistudios.com" target="_blank">CCI Studios</a></div>
      
      </div>
    </div>
  </div>
