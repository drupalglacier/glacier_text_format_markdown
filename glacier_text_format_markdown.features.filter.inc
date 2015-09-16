<?php
/**
 * @file
 * glacier_text_format_markdown.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function glacier_text_format_markdown_filter_default_formats() {
  $formats = array();

  // Exported format: Markdown (Backend).
  $formats['markdown_backend'] = array(
    'format' => 'markdown_backend',
    'name' => 'Markdown (Backend)',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <h1> <h2> <h3> <h4> <h5> <h6>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_markdown' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Markdown.
  $formats['markdown_frontend'] = array(
    'format' => 'markdown_frontend',
    'name' => 'Markdown',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <h2> <h3> <h4> <h5> <h6>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 1,
        ),
      ),
      'filter_markdown' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
