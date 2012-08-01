<?php
/**
 * @file
 * library_research_guide.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function library_research_guide_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_library_guide_or_tutorial';
  $strongarm->value = 0;
  $export['comment_anonymous_library_guide_or_tutorial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_library_guide_or_tutorial';
  $strongarm->value = 1;
  $export['comment_default_mode_library_guide_or_tutorial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_library_guide_or_tutorial';
  $strongarm->value = '50';
  $export['comment_default_per_page_library_guide_or_tutorial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_library_guide_or_tutorial';
  $strongarm->value = 1;
  $export['comment_form_location_library_guide_or_tutorial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_library_guide_or_tutorial';
  $strongarm->value = '1';
  $export['comment_library_guide_or_tutorial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_library_guide_or_tutorial';
  $strongarm->value = '1';
  $export['comment_preview_library_guide_or_tutorial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_library_guide_or_tutorial';
  $strongarm->value = 1;
  $export['comment_subject_field_library_guide_or_tutorial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__library_guide_or_tutorial';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__library_guide_or_tutorial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_library_guide_or_tutorial';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_library_guide_or_tutorial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_library_guide_or_tutorial';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_library_guide_or_tutorial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_library_guide_or_tutorial';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_library_guide_or_tutorial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_library_guide_or_tutorial';
  $strongarm->value = '1';
  $export['node_preview_library_guide_or_tutorial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_library_guide_or_tutorial';
  $strongarm->value = 0;
  $export['node_submitted_library_guide_or_tutorial'] = $strongarm;

  return $export;
}
