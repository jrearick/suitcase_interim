<?php

/*
 * Implements THEMENAME_alpha_preprocess_html
 */
function suitcase_interim_alpha_preprocess_html(&$vars) {
  drupal_add_http_header('X-UA-Compatible', 'IE=edge');
  if (!module_exists('fontawesome')) {
    drupal_add_css('//cdn.theme.iastate.edu/font-awesome/css/font-awesome.css', array('type' => 'external', 'weight' => 5));
  }
}
