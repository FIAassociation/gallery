<?php
/**
 * @file
 * gallery_all_required.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function gallery_all_required_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:taxonomy/term/1
  $menu_links['main-menu:taxonomy/term/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/1',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Taxonomy term',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '10',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Taxonomy term');


  return $menu_links;
}
