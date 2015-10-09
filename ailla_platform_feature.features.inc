<?php
/**
 * @file
 * ailla_platform_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ailla_platform_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ailla_platform_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function ailla_platform_feature_islandora_solr_fields_features_default_fields() {
  return array();
}

/**
 * Implements hook_islandora_solr_metadata_configurations_default_fields().
 */
function ailla_platform_feature_islandora_solr_metadata_configurations_default_fields() {
 return array(
  'ailla_collection' => array(
    'fields' => array(
      'mods_titleInfo_alternative_lang_english_title_s' => array(
        'solr_field' => 'mods_titleInfo_alternative_lang_english_title_s',
        'data' => 'a:3:{s:13:"display_label";s:16:"Indigenous Title";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 2,
        'display_label' => 'Indigenous Title',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_titleInfo_lang_eng_title_s' => array(
        'solr_field' => 'mods_titleInfo_lang_eng_title_s',
        'data' => 'a:3:{s:13:"display_label";s:13:"English Title";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 3,
        'display_label' => 'English Title',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_titleInfo_lang_spa_title_s' => array(
        'solr_field' => 'mods_titleInfo_lang_spa_title_s',
        'data' => 'a:3:{s:13:"display_label";s:13:"Spanish Title";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 4,
        'display_label' => 'Spanish Title',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_abstract_lang_eng_s' => array(
        'solr_field' => 'mods_abstract_lang_eng_s',
        'data' => 'a:3:{s:13:"display_label";s:21:"Description [English]";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 5,
        'display_label' => 'Description [English]',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_abstract_lang_spa_s' => array(
        'solr_field' => 'mods_abstract_lang_spa_s',
        'data' => 'a:3:{s:13:"display_label";s:21:"Description [Spanish]";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 6,
        'display_label' => 'Description [Spanish]',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_abstract_lang_english_s' => array(
        'solr_field' => 'mods_abstract_lang_english_s',
        'data' => 'a:3:{s:13:"display_label";s:24:"Description [Indigenous]";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 7,
        'display_label' => 'Description [Indigenous]',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
    ),
    'cmodels' => array(
      'islandora:collectionCModel' => array(
        'cmodel' => 'islandora:collectionCModel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
      'description_data' => NULL,
    ),
    'name' => 'Collection',
  ),
  'ailla_contributor' => array(
    'fields' => array(
      'MADS_given_ms' => array(
        'solr_field' => 'MADS_given_ms',
        'data' => 'a:3:{s:13:"display_label";s:10:"First Name";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 3,
        'display_label' => 'First Name',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'MADS_family_ms' => array(
        'solr_field' => 'MADS_family_ms',
        'data' => 'a:3:{s:13:"display_label";s:10:"Surname(s)";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 4,
        'display_label' => 'Surname(s)',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
    ),
    'cmodels' => array(
      'ailla:contributorCModel' => array(
        'cmodel' => 'ailla:contributorCModel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
      'description_data' => NULL,
    ),
    'name' => 'Contributor',
  ),
  'ailla_organization' => array(
    'fields' => array(
      'MADS_department_ms' => array(
        'solr_field' => 'MADS_department_ms',
        'data' => 'a:3:{s:13:"display_label";s:17:"Organization name";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 2,
        'display_label' => 'Organization name',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'MADS_acronym_ms' => array(
        'solr_field' => 'MADS_acronym_ms',
        'data' => 'a:3:{s:13:"display_label";s:7:"Acronym";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 3,
        'display_label' => 'Acronym',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'MADS_director_ms' => array(
        'solr_field' => 'MADS_director_ms',
        'data' => 'a:3:{s:13:"display_label";s:19:"Director(s) Name(s)";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 4,
        'display_label' => 'Director(s) Name(s)',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'MADS_funder_ms' => array(
        'solr_field' => 'MADS_funder_ms',
        'data' => 'a:3:{s:13:"display_label";s:6:"Funder";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 5,
        'display_label' => 'Funder',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'MADS_parent institution_ms' => array(
        'solr_field' => 'MADS_parent institution_ms',
        'data' => 'a:3:{s:13:"display_label";s:18:"Parent Institution";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 6,
        'display_label' => 'Parent Institution',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'MADS_biographical/historical_ms' => array(
        'solr_field' => 'MADS_biographical/historical_ms',
        'data' => 'a:3:{s:13:"display_label";s:11:"Description";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 7,
        'display_label' => 'Description',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
    ),
    'cmodels' => array(
      'ailla:organizationCModel' => array(
        'cmodel' => 'ailla:organizationCModel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
      'description_data' => NULL,
    ),
    'name' => 'Organization',
  ),
  'ailla_resource' => array(
    'fields' => array(
      'mods_titleInfo_alternative_title_s' => array(
        'solr_field' => 'mods_titleInfo_alternative_title_s',
        'data' => 'a:3:{s:13:"display_label";s:16:"Indigenous Title";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 2,
        'display_label' => 'Indigenous Title',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_titleInfo_title_s' => array(
        'solr_field' => 'mods_titleInfo_title_s',
        'data' => 'a:3:{s:13:"display_label";s:13:"English Title";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 3,
        'display_label' => 'English Title',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_titleInfo_lang_spa_title_s' => array(
        'solr_field' => 'mods_titleInfo_lang_spa_title_s',
        'data' => 'a:3:{s:13:"display_label";s:13:"Spanish Title";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 4,
        'display_label' => 'Spanish Title',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_abstract_s' => array(
        'solr_field' => 'mods_abstract_s',
        'data' => 'a:3:{s:13:"display_label";s:21:"Description [English]";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 5,
        'display_label' => 'Description [English]',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_abstract_lang_spa_s' => array(
        'solr_field' => 'mods_abstract_lang_spa_s',
        'data' => 'a:3:{s:13:"display_label";s:21:"Description [Spanish]";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 6,
        'display_label' => 'Description [Spanish]',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'mods_originInfo_eventType_production_dateCreated_dt' => array(
        'solr_field' => 'mods_originInfo_eventType_production_dateCreated_dt',
        'data' => 'a:3:{s:13:"display_label";s:12:"Date Created";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 7,
        'display_label' => 'Date Created',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
    ),
    'cmodels' => array(
      'ailla:resourceCModel' => array(
        'cmodel' => 'ailla:resourceCModel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
      'description_data' => NULL,
    ),
    'name' => 'Resource',
  ),
);
}
