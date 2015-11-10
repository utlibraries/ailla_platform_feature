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

  $export['views-16fe3259af1a7c8b43f9331adc24905a'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '16fe3259af1a7c8b43f9331adc24905a',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ailla' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ailla',
        'weight' => -28,
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
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
