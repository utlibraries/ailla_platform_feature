<?php
/**
 * @file
 * ailla_platform_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ailla_platform_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-browse.
  $menus['menu-browse'] = array(
    'menu_name' => 'menu-browse',
    'title' => 'Browse',
    'description' => 'Browse links',
  );
  // Exported menu: menu-user.
  $menus['menu-user'] = array(
    'menu_name' => 'menu-user',
    'title' => 'User',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Browse');
  t('Browse links');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('User');


  return $menus;
}
