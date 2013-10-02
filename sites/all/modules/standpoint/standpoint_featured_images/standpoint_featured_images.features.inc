<?php
/**
 * @file
 * standpoint_featured_images.features.inc
 */

/**
 * Implements hook_views_api().
 */
function standpoint_featured_images_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function standpoint_featured_images_image_default_styles() {
  $styles = array();

  // Exported image style: home-image-a.
  $styles['home-image-a'] = array(
    'name' => 'home-image-a',
    'label' => 'home-image-a',
    'effects' => array(
      4 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 728,
          'height' => 440,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'home-image-a',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: home-image-b.
  $styles['home-image-b'] = array(
    'name' => 'home-image-b',
    'label' => 'home-image-b',
    'effects' => array(
      5 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 210,
          'height' => 210,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'home-image-b',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: home-image-c.
  $styles['home-image-c'] = array(
    'name' => 'home-image-c',
    'label' => 'home-image-c',
    'effects' => array(
      6 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 210,
          'height' => 440,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'home-image-c',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function standpoint_featured_images_node_info() {
  $items = array(
    'home_image_1' => array(
      'name' => t('Home Image 1'),
      'base' => 'node_content',
      'description' => t('Featured image on the homepage on the top left.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'home_image_2' => array(
      'name' => t('Home Image 2'),
      'base' => 'node_content',
      'description' => t('Featured image that appears on the homepage on the top right.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'home_image_3' => array(
      'name' => t('Home Image 3'),
      'base' => 'node_content',
      'description' => t('Featured image that appears on the homepage on the middle right.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'home_image_4' => array(
      'name' => t('Home Image 4'),
      'base' => 'node_content',
      'description' => t('Featured image that appears on the homepage on the bottom left.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'home_image_5' => array(
      'name' => t('Home Image 5'),
      'base' => 'node_content',
      'description' => t('Featured image that appears on the homepage on the bottom right.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
