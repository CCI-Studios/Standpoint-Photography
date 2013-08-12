<?php
/**
 * @file
 * standpoint_projects.features.inc
 */

/**
 * Implements hook_views_api().
 */
function standpoint_projects_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function standpoint_projects_image_default_styles() {
  $styles = array();

  // Exported image style: module-manual-crop.
  $styles['module-manual-crop'] = array(
    'name' => 'module-manual-crop',
    'label' => 'module-manual-crop',
    'effects' => array(
      9 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 286,
          'height' => 160,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 1,
          'style_name' => 'module-manual-crop',
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
function standpoint_projects_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('Project that will appear in the Projects widget.'),
      'has_title' => '1',
      'title_label' => t('Project Title'),
      'help' => t('Upload an image or choose a youtube video. DO NOT use both.'),
    ),
    'song_of_the_week' => array(
      'name' => t('Song of the Week'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Song Title'),
      'help' => '',
    ),
    'weekly_wud_up' => array(
      'name' => t('Weekly Wud Up'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
