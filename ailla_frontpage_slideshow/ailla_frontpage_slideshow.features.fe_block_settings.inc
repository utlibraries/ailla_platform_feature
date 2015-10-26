<?php
/**
 * @file
 * ailla_frontpage_slideshow.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ailla_frontpage_slideshow_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-node_content_slideshow-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'node_content_slideshow-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ailla' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ailla',
        'weight' => -26,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
