<?php

/**
 * @file
 * For bulk upload settings.
 *
 * For specifying bulkupload folder location.
 */
function mms_bulkupload_settings() {
  $form = array();
  $form['mms_bulkupload_path'] = array(
    '#type' => 'textfield',
    '#title' => 'Product image location',
    '#description' => t('Specify the folder in which product images should be saved'),
    '#default_value' => variable_get('mms_bulkupload_path', ''),
  );
  return system_settings_form($form);
}
