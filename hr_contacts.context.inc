<?php
/**
 * @file
 * hr_contacts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hr_contacts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hr_contacts_space';
  $context->description = 'Contacts page per space';
  $context->tag = 'Contacts';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/contacts' => 'node/*/contacts',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-sp6ljjoCBKBVws0uia1DCKcDmln6TeUq' => array(
          'module' => 'facetapi',
          'delta' => 'sp6ljjoCBKBVws0uia1DCKcDmln6TeUq',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-ZXNTNWz3w05hh3aLGFw0ofPRZUa5biIZ' => array(
          'module' => 'facetapi',
          'delta' => 'ZXNTNWz3w05hh3aLGFw0ofPRZUa5biIZ',
          'region' => 'sidebar_first',
          'weight' => '-54',
        ),
        'facetapi-1hjHAWyo40pPT1kGXlwdvjD6OFhWBEU5' => array(
          'module' => 'facetapi',
          'delta' => '1hjHAWyo40pPT1kGXlwdvjD6OFhWBEU5',
          'region' => 'sidebar_first',
          'weight' => '-53',
        ),
        'facetapi-uulIYjH3ZtSu9hhI5ARgBYQeEUNqWe17' => array(
          'module' => 'facetapi',
          'delta' => 'uulIYjH3ZtSu9hhI5ARgBYQeEUNqWe17',
          'region' => 'sidebar_first',
          'weight' => '-52',
        ),
        'facetapi-hSnBts4Ap4yrSjQu7LKhsVdrHxAjyYKU' => array(
          'module' => 'facetapi',
          'delta' => 'hSnBts4Ap4yrSjQu7LKhsVdrHxAjyYKU',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contacts');
  t('Contacts page per space');
  $export['hr_contacts_space'] = $context;

  return $export;
}
