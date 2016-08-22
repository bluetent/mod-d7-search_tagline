<?php if($tagline_one || $tagline_two): ?>
  <div class="slideshow-slogan">
    <?php if($tagline_one): ?>
      <div class="slogan-primary"><?php print $tagline_one; ?></div>
    <?php endif; ?>
    <?php if($tagline_two): ?>
      <div class="slogan-secondary"><?php print $tagline_two; ?></div>
    <?php endif; ?>
  </div>
  <!-- /.slideshow-slogan -->
<?php endif;?>
