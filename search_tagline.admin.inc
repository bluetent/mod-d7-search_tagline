<?php
/**
 * @file Admin page for module
 */

/**
 * Configuration form for module
 */
function search_tagline_admin_settings() {
  $form = array();

  $form['tagline_line_one'] = array(
    '#type' => 'textarea',
    '#title' => 'Tagline - Line One',
    '#description' => 'Enter tagline for the top row',
    '#default_value' => variable_get('tagline_line_one', 'Creating New Memories'),
  );

  $form['tagline_line_two'] = array(
    '#type' => 'textarea',
    '#title' => 'Tagline - Line Two',
    '#description' => 'Enter tagline for the bottom row',
    '#default_value' => variable_get('tagline_line_two', 'One Vacation at a Time'),
  );

  return system_settings_form($form);
}
