<?php
/**
 * @file
 * Administrative page callbacks for the MyModule module.
 */

/**
 * MyModule configuration form.
 */
function mymodule_configuration_form($form, &$form_state) {
  // Form values will be saved to this config file. See system_settings_form().
  $form['#config'] = 'mymodule.settings';

  // Use $config->get() for default values.
  $config = config('mymodule.settings');

  $form['opinion_of_backdrop'] = array(
    '#type' => 'textfield',
    '#title' => t('What do you think of Backdrop CMS?'),
    '#default_value' => $config->get('opinion_of_backdrop'),
  );

  return system_settings_form($form);
}
