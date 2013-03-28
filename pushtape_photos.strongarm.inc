<?php
/**
 * @file
 * pushtape_photos.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pushtape_photos_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_photoset';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_photoset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_photoset';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_photoset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_photoset';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_photoset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_photoset';
  $strongarm->value = '1';
  $export['node_preview_photoset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_photoset';
  $strongarm->value = 0;
  $export['node_submitted_photoset'] = $strongarm;

  return $export;
}
