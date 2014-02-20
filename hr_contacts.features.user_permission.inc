<?php
/**
 * @file
 * hr_contacts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_contacts_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable hr_contacts'.
  $permissions['create fieldable hr_contacts'] = array(
    'name' => 'create fieldable hr_contacts',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable hr_contacts'.
  $permissions['delete fieldable hr_contacts'] = array(
    'name' => 'delete fieldable hr_contacts',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable hr_contacts'.
  $permissions['edit fieldable hr_contacts'] = array(
    'name' => 'edit fieldable hr_contacts',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
