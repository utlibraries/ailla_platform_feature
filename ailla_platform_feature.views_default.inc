<?php
/**
 * @file
 * ailla_platform_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ailla_platform_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ailla_depositors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'AILLA Depositors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'AILLA Depositors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: fgs_label_ms */
  $handler->display->display_options['fields']['fgs_label_ms']['id'] = 'fgs_label_ms';
  $handler->display->display_options['fields']['fgs_label_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fgs_label_ms']['field'] = 'fgs_label_ms';
  $handler->display->display_options['fields']['fgs_label_ms']['label'] = '';
  $handler->display->display_options['fields']['fgs_label_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fgs_label_ms']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fgs_label_ms']['link_to_object'] = 1;
  /* Sort criterion: Islandora Solr: fgs_label_s */
  $handler->display->display_options['sorts']['fgs_label_s']['id'] = 'fgs_label_s';
  $handler->display->display_options['sorts']['fgs_label_s']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['fgs_label_s']['field'] = 'fgs_label_s';
  /* Filter criterion: Islandora Solr: MADS_depositor status_ms */
  // XXX: This section was manually added in; the space between 'depositor' and
  // 'status' makes this view currently un-editable.
  $handler->display->display_options['filters']['MADS_depositor status_ms']['id'] = 'MADS_depositor status_ms';
  $handler->display->display_options['filters']['MADS_depositor status_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['MADS_depositor status_ms']['field'] = 'MADS_depositor status_ms';
  $handler->display->display_options['filters']['MADS_depositor status_ms']['value'] = 'Y';
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['id'] = 'RELS_EXT_isMemberOfCollection_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['field'] = 'RELS_EXT_isMemberOfCollection_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['value'] = 'info:fedora/ailla:persons_collection';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ailla-depositors';
  $translatables['ailla_depositors'] = array(
    t('Master'),
    t('AILLA Depositors'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Page'),
  );
  $export['ailla_depositors'] = $view;

  $view = new view();
  $view->name = 'ailla_language_codes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'AILLA Language Codes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'AILLA Language Codes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: aillaLanguage_aillaLangCode_et */
  $handler->display->display_options['fields']['aillaLanguage_aillaLangCode_et']['id'] = 'aillaLanguage_aillaLangCode_et';
  $handler->display->display_options['fields']['aillaLanguage_aillaLangCode_et']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['aillaLanguage_aillaLangCode_et']['field'] = 'aillaLanguage_aillaLangCode_et';
  $handler->display->display_options['fields']['aillaLanguage_aillaLangCode_et']['label'] = '';
  $handler->display->display_options['fields']['aillaLanguage_aillaLangCode_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['aillaLanguage_aillaLangCode_et']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['aillaLanguage_aillaLangCode_et']['link_to_object'] = 1;
  /* Sort criterion: Islandora Solr: fgs_label_s */
  $handler->display->display_options['sorts']['fgs_label_s']['id'] = 'fgs_label_s';
  $handler->display->display_options['sorts']['fgs_label_s']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['fgs_label_s']['field'] = 'fgs_label_s';
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['id'] = 'RELS_EXT_isMemberOfCollection_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['field'] = 'RELS_EXT_isMemberOfCollection_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_ms']['value'] = 'info:fedora/ailla:language_collection';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ailla-language-codes';
  $translatables['ailla_language_codes'] = array(
    t('Master'),
    t('AILLA Language Codes'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Page'),
  );
  $export['ailla_language_codes'] = $view;

  $view = new view();
  $view->name = 'frontpage_node_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frontpage Node View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '32dd9e74-c22d-4e60-b35b-21e482d8ed8d';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'frontpage-node-view';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['frontpage_node_view'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Page'),
    t('Block'),
  );
  $export['frontpage_node_view'] = $view;

  $view = new view();
  $view->name = 'resource_media_files';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Resource Media Files';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Media Files';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'fgs_label_s' => 'fgs_label_s',
    'mods_genre_lang_eng_authority_aillamediagenres_s' => 'mods_genre_lang_eng_authority_aillamediagenres_s',
    'mods_language_languageTerm_text_valueURI_ms' => 'mods_language_languageTerm_text_valueURI_ms',
  );
  $handler->display->display_options['style_options']['default'] = 'fgs_label_s';
  $handler->display->display_options['style_options']['info'] = array(
    'fgs_label_s' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'mods_genre_lang_eng_authority_aillamediagenres_s' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'mods_language_languageTerm_text_valueURI_ms' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  /* Field: Islandora Solr: fgs_label_s */
  $handler->display->display_options['fields']['fgs_label_s']['id'] = 'fgs_label_s';
  $handler->display->display_options['fields']['fgs_label_s']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fgs_label_s']['field'] = 'fgs_label_s';
  $handler->display->display_options['fields']['fgs_label_s']['label'] = 'Object';
  $handler->display->display_options['fields']['fgs_label_s']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fgs_label_s']['link_to_object'] = 1;
  /* Field: Islandora Solr: fedora_non_xml_mime_ms */
  $handler->display->display_options['fields']['fedora_non_xml_mime_ms']['id'] = 'fedora_non_xml_mime_ms';
  $handler->display->display_options['fields']['fedora_non_xml_mime_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fedora_non_xml_mime_ms']['field'] = 'fedora_non_xml_mime_ms';
  $handler->display->display_options['fields']['fedora_non_xml_mime_ms']['label'] = 'File Types';
  $handler->display->display_options['fields']['fedora_non_xml_mime_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fedora_non_xml_mime_ms']['link_to_object'] = 0;
  /* Contextual filter: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_s */
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_s']['id'] = 'RELS_EXT_isMemberOfCollection_uri_s';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_s']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_s']['field'] = 'RELS_EXT_isMemberOfCollection_uri_s';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_s']['default_action'] = 'default';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_s']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_s']['default_argument_options']['code'] = '$object = menu_get_object(\'islandora_object\', 2);
if (is_object($object) && in_array(\'ailla:resourceCModel\', $object->models)) {
  return \'info:fedora/\' . $object->id;
}';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_s']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_s']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_s']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['enabled'] = FALSE;

  /* Display: Media Files */
  $handler = $view->new_display('block', 'Media Files', 'presentation_files');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Media Files';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: Query Parser (Lucene) */
  $handler->display->display_options['filters']['query_lucene']['id'] = 'query_lucene';
  $handler->display->display_options['filters']['query_lucene']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['query_lucene']['field'] = 'query_lucene';
  $handler->display->display_options['filters']['query_lucene']['value'] = 'mods_note_archival_status_s:("P" OR "B" OR "A")';
  $translatables['resource_media_files'] = array(
    t('Master'),
    t('Media Files'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Object'),
    t('File Types'),
    t('All'),
    t('Block'),
  );
  $export['resource_media_files'] = $view;

  return $export;
}
