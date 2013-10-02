<?php
/**
 * @file
 * standpoint_background_images.features.inc
 */

/**
 * Implements hook_views_api().
 */
function standpoint_background_images_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function standpoint_background_images_node_info() {
  $items = array(
    'page_background' => array(
      'name' => t('Page Background'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Identifying Name'),
      'help' => '',
    ),
  );
  return $items;
}
