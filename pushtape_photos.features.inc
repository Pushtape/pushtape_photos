<?php
/**
 * @file
 * pushtape_photos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pushtape_photos_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pushtape_photos_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pushtape_photos_node_info() {
  $items = array(
    'pushtape_photos' => array(
      'name' => t('Photos'),
      'base' => 'node_content',
      'description' => t('Add single images or photosets'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
