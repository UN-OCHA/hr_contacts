<?php
/**
 * @file
 * hr_contacts.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function hr_contacts_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:hr_operation:create hr_contact content'
  $permissions['node:hr_operation:create hr_contact content'] = array(
    'roles' => array(
      'bundle member' => 'bundle member',
      'editor' => 'editor',
      'manager' => 'manager',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:hr_operation:delete any hr_contact content'
  $permissions['node:hr_operation:delete any hr_contact content'] = array(
    'roles' => array(
      'bundle member' => 'bundle member',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_operation:delete own hr_contact content'
  $permissions['node:hr_operation:delete own hr_contact content'] = array(
    'roles' => array(
      'bundle member' => 'bundle member',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_operation:update any hr_contact content'
  $permissions['node:hr_operation:update any hr_contact content'] = array(
    'roles' => array(
      'bundle member' => 'bundle member',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_operation:update own hr_contact content'
  $permissions['node:hr_operation:update own hr_contact content'] = array(
    'roles' => array(
      'bundle member' => 'bundle member',
      'editor' => 'editor',
      'manager' => 'manager',
      'member' => 'member',
    ),
  );

  return $permissions;
}
