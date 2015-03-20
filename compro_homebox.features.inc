<?php
/**
 * @file
 * compro_homebox.features.inc
 */

/**
 * Implements hook_homebox().
 */
function compro_homebox_homebox() {
  $homeboxes = array();

  $homeboxes['compro_homebox'] = array(
    'regions' => 2,
    'cache' => 0,
    'color' => 0,
    'colors' => array(
      0 => '#E4F0F8',
      1 => '#E4F0F8',
      2 => '#E4F0F8',
      3 => '#E4F0F8',
      4 => '#E4F0F8',
      5 => '#E4F0F8',
    ),
    'blocks' => array(
      'system_navigation' => array(
        'module' => 'system',
        'delta' => 'navigation',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -20,
      ),
      'compro_homebox_overview' => array(
        'module' => 'compro_homebox',
        'delta' => 'overview',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -20,
      ),
      'compro_homebox_status' => array(
        'module' => 'compro_homebox',
        'delta' => 'status',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 0,
        'closable' => 1,
        'title' => '',
        'weight' => -20,
      ),
      'node_recent' => array(
        'module' => 'node',
        'delta' => 'recent',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -19,
      ),
      'user_new' => array(
        'module' => 'user',
        'delta' => 'new',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -19,
      ),
    ),
    'widths' => array(),
    'title' => 'Dashboard',
    'path' => 'admin/dashboard',
    'menu' => 1,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 0,
    'roles' => array(
      0 => 'author',
    ),
  );


  return $homeboxes;
}
