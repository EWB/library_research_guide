<?php
/**
 * @file
 * library_research_guide.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_research_guide_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function library_research_guide_node_info() {
  $items = array(
    'library_guide_or_tutorial' => array(
      'name' => t('Research Guide or Tutorial'),
      'base' => 'node_content',
      'description' => t('Guides and tutorials for the library.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
