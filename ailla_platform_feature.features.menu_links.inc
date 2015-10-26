<?php
/**
 * @file
 * ailla_platform_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ailla_platform_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_access:uuid/node/0919acbd-ad3c-4ce1-880b-fdd4ffa67cd1.
  $menu_links['main-menu_access:uuid/node/0919acbd-ad3c-4ce1-880b-fdd4ffa67cd1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/0919acbd-ad3c-4ce1-880b-fdd4ffa67cd1',
    'router_path' => 'uuid',
    'link_title' => 'Access',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_access:uuid/node/0919acbd-ad3c-4ce1-880b-fdd4ffa67cd1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_how-to-use:uuid/node/102059cd-5636-41c3-b156-0bb7e0defe8b',
  );
  // Exported menu link: main-menu_ailla-papers:uuid/node/a1e91628-de97-4857-af15-de2a9ce73d09.
  $menu_links['main-menu_ailla-papers:uuid/node/a1e91628-de97-4857-af15-de2a9ce73d09'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/a1e91628-de97-4857-af15-de2a9ce73d09',
    'router_path' => 'uuid',
    'link_title' => 'AILLA papers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_ailla-papers:uuid/node/a1e91628-de97-4857-af15-de2a9ce73d09',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_browse:islandora.
  $menu_links['main-menu_browse:islandora'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Browse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_browse:islandora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_citations:uuid/node/82d6802d-2182-4fd0-881e-470120487bf6.
  $menu_links['main-menu_citations:uuid/node/82d6802d-2182-4fd0-881e-470120487bf6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/82d6802d-2182-4fd0-881e-470120487bf6',
    'router_path' => 'uuid',
    'link_title' => 'Citations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_citations:uuid/node/82d6802d-2182-4fd0-881e-470120487bf6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_collection:islandora.
  $menu_links['main-menu_collection:islandora'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Collection',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_collection:islandora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_browse:islandora',
  );
  // Exported menu link: main-menu_collections:islandora.
  $menu_links['main-menu_collections:islandora'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Collections',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_collections:islandora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_welcome:uuid/node/32dd9e74-c22d-4e60-b35b-21e482d8ed8d',
  );
  // Exported menu link: main-menu_conditions:uuid/node/c9b6d615-b8c0-4c7f-ad7b-1112699ed153.
  $menu_links['main-menu_conditions:uuid/node/c9b6d615-b8c0-4c7f-ad7b-1112699ed153'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/c9b6d615-b8c0-4c7f-ad7b-1112699ed153',
    'router_path' => 'uuid',
    'link_title' => 'Conditions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_conditions:uuid/node/c9b6d615-b8c0-4c7f-ad7b-1112699ed153',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact:uuid/node/666a2f2f-9f3a-475f-a2a8-4bed64b87350.
  $menu_links['main-menu_contact:uuid/node/666a2f2f-9f3a-475f-a2a8-4bed64b87350'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/666a2f2f-9f3a-475f-a2a8-4bed64b87350',
    'router_path' => 'uuid',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact:uuid/node/666a2f2f-9f3a-475f-a2a8-4bed64b87350',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_country:uuid/node/db8aeb64-e064-43cb-aa55-0533e7328365.
  $menu_links['main-menu_country:uuid/node/db8aeb64-e064-43cb-aa55-0533e7328365'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/db8aeb64-e064-43cb-aa55-0533e7328365',
    'router_path' => 'uuid',
    'link_title' => 'Country',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_country:uuid/node/db8aeb64-e064-43cb-aa55-0533e7328365',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_browse:islandora',
  );
  // Exported menu link: main-menu_data-mgmt-plan:uuid/node/3fdba112-fa9f-46ec-8fb7-0e8efbc9d3ce.
  $menu_links['main-menu_data-mgmt-plan:uuid/node/3fdba112-fa9f-46ec-8fb7-0e8efbc9d3ce'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/3fdba112-fa9f-46ec-8fb7-0e8efbc9d3ce',
    'router_path' => 'uuid',
    'link_title' => 'Data Mgmt Plan',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_data-mgmt-plan:uuid/node/3fdba112-fa9f-46ec-8fb7-0e8efbc9d3ce',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_depositors:uuid/node/ff41d08e-a581-4370-b9d7-366e30f9cd12',
  );
  // Exported menu link: main-menu_delivery:uuid/node/426fc684-223e-4dd2-9e84-ecadb06f19a0.
  $menu_links['main-menu_delivery:uuid/node/426fc684-223e-4dd2-9e84-ecadb06f19a0'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/426fc684-223e-4dd2-9e84-ecadb06f19a0',
    'router_path' => 'uuid',
    'link_title' => 'Delivery',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_delivery:uuid/node/426fc684-223e-4dd2-9e84-ecadb06f19a0',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_depositors:uuid/node/ff41d08e-a581-4370-b9d7-366e30f9cd12',
  );
  // Exported menu link: main-menu_depositor:uuid/node/1004c368-5e62-45be-985c-4bad65ae3f63.
  $menu_links['main-menu_depositor:uuid/node/1004c368-5e62-45be-985c-4bad65ae3f63'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/1004c368-5e62-45be-985c-4bad65ae3f63',
    'router_path' => 'uuid',
    'link_title' => 'Depositor',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_depositor:uuid/node/1004c368-5e62-45be-985c-4bad65ae3f63',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_browse:islandora',
  );
  // Exported menu link: main-menu_depositors:uuid/node/ff41d08e-a581-4370-b9d7-366e30f9cd12.
  $menu_links['main-menu_depositors:uuid/node/ff41d08e-a581-4370-b9d7-366e30f9cd12'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/ff41d08e-a581-4370-b9d7-366e30f9cd12',
    'router_path' => 'uuid',
    'link_title' => 'Depositors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_depositors:uuid/node/ff41d08e-a581-4370-b9d7-366e30f9cd12',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_disclaimers:uuid/node/ea78941e-227c-418b-b491-ab30a2413f17.
  $menu_links['main-menu_disclaimers:uuid/node/ea78941e-227c-418b-b491-ab30a2413f17'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/ea78941e-227c-418b-b491-ab30a2413f17',
    'router_path' => 'uuid',
    'link_title' => 'Disclaimers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_disclaimers:uuid/node/ea78941e-227c-418b-b491-ab30a2413f17',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_download:uuid/node/22f5eb7f-66ec-40c9-b190-c477fd748210.
  $menu_links['main-menu_download:uuid/node/22f5eb7f-66ec-40c9-b190-c477fd748210'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/22f5eb7f-66ec-40c9-b190-c477fd748210',
    'router_path' => 'uuid',
    'link_title' => 'Download',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_download:uuid/node/22f5eb7f-66ec-40c9-b190-c477fd748210',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_how-to-use:uuid/node/102059cd-5636-41c3-b156-0bb7e0defe8b',
  );
  // Exported menu link: main-menu_events:uuid/node/ff572318-d8b5-4223-a6c0-05457474fcc6.
  $menu_links['main-menu_events:uuid/node/ff572318-d8b5-4223-a6c0-05457474fcc6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/ff572318-d8b5-4223-a6c0-05457474fcc6',
    'router_path' => 'uuid',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_events:uuid/node/ff572318-d8b5-4223-a6c0-05457474fcc6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_formats:uuid/node/8273df59-bd22-4723-9a6e-d34ae539ff2a.
  $menu_links['main-menu_formats:uuid/node/8273df59-bd22-4723-9a6e-d34ae539ff2a'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/8273df59-bd22-4723-9a6e-d34ae539ff2a',
    'router_path' => 'uuid',
    'link_title' => 'Formats',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_formats:uuid/node/8273df59-bd22-4723-9a6e-d34ae539ff2a',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_depositors:uuid/node/ff41d08e-a581-4370-b9d7-366e30f9cd12',
  );
  // Exported menu link: main-menu_help:uuid/node/5c186fa6-2adc-4b3f-814a-f5463524ea0a.
  $menu_links['main-menu_help:uuid/node/5c186fa6-2adc-4b3f-814a-f5463524ea0a'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/5c186fa6-2adc-4b3f-814a-f5463524ea0a',
    'router_path' => 'uuid',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_help:uuid/node/5c186fa6-2adc-4b3f-814a-f5463524ea0a',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: main-menu_history:uuid/node/b35671aa-569b-4b77-9a3a-1c15d2293456.
  $menu_links['main-menu_history:uuid/node/b35671aa-569b-4b77-9a3a-1c15d2293456'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/b35671aa-569b-4b77-9a3a-1c15d2293456',
    'router_path' => 'uuid',
    'link_title' => 'History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_history:uuid/node/b35671aa-569b-4b77-9a3a-1c15d2293456',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_welcome:uuid/node/32dd9e74-c22d-4e60-b35b-21e482d8ed8d',
  );
  // Exported menu link: main-menu_how-to-use:uuid/node/102059cd-5636-41c3-b156-0bb7e0defe8b.
  $menu_links['main-menu_how-to-use:uuid/node/102059cd-5636-41c3-b156-0bb7e0defe8b'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/102059cd-5636-41c3-b156-0bb7e0defe8b',
    'router_path' => 'uuid',
    'link_title' => 'How to Use',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_how-to-use:uuid/node/102059cd-5636-41c3-b156-0bb7e0defe8b',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_keyword-search:uuid/node/521f761f-d45b-4903-b7d8-fe31e988b250.
  $menu_links['main-menu_keyword-search:uuid/node/521f761f-d45b-4903-b7d8-fe31e988b250'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/521f761f-d45b-4903-b7d8-fe31e988b250',
    'router_path' => 'uuid',
    'link_title' => 'Keyword Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_keyword-search:uuid/node/521f761f-d45b-4903-b7d8-fe31e988b250',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_browse:islandora',
  );
  // Exported menu link: main-menu_language:uuid/node/a4d5663c-7c10-4f06-9e91-9f027c0c84a1.
  $menu_links['main-menu_language:uuid/node/a4d5663c-7c10-4f06-9e91-9f027c0c84a1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/a4d5663c-7c10-4f06-9e91-9f027c0c84a1',
    'router_path' => 'uuid',
    'link_title' => 'Language',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_language:uuid/node/a4d5663c-7c10-4f06-9e91-9f027c0c84a1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_browse:islandora',
  );
  // Exported menu link: main-menu_lg-code:uuid/node/a872de60-bc55-4e9e-b5cd-4739afdc1879.
  $menu_links['main-menu_lg-code:uuid/node/a872de60-bc55-4e9e-b5cd-4739afdc1879'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/a872de60-bc55-4e9e-b5cd-4739afdc1879',
    'router_path' => 'uuid',
    'link_title' => 'LG Code',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_lg-code:uuid/node/a872de60-bc55-4e9e-b5cd-4739afdc1879',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_browse:islandora',
  );
  // Exported menu link: main-menu_license:uuid/node/d9569c7c-d266-447d-b91b-081f0651254b.
  $menu_links['main-menu_license:uuid/node/d9569c7c-d266-447d-b91b-081f0651254b'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/d9569c7c-d266-447d-b91b-081f0651254b',
    'router_path' => 'uuid',
    'link_title' => 'License',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_license:uuid/node/d9569c7c-d266-447d-b91b-081f0651254b',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_metadata:uuid/node/d7e2cced-b565-4de8-9011-62ece419992c.
  $menu_links['main-menu_metadata:uuid/node/d7e2cced-b565-4de8-9011-62ece419992c'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/d7e2cced-b565-4de8-9011-62ece419992c',
    'router_path' => 'uuid',
    'link_title' => 'Metadata',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_metadata:uuid/node/d7e2cced-b565-4de8-9011-62ece419992c',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_depositors:uuid/node/ff41d08e-a581-4370-b9d7-366e30f9cd12',
  );
  // Exported menu link: main-menu_mission:uuid/node/908361a6-e310-45ef-9ca6-845bbd555548.
  $menu_links['main-menu_mission:uuid/node/908361a6-e310-45ef-9ca6-845bbd555548'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/908361a6-e310-45ef-9ca6-845bbd555548',
    'router_path' => 'uuid',
    'link_title' => 'Mission',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_mission:uuid/node/908361a6-e310-45ef-9ca6-845bbd555548',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_welcome:uuid/node/32dd9e74-c22d-4e60-b35b-21e482d8ed8d',
  );
  // Exported menu link: main-menu_names:uuid/node/51d788bb-1938-48d5-a174-7446e1694c9f.
  $menu_links['main-menu_names:uuid/node/51d788bb-1938-48d5-a174-7446e1694c9f'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/51d788bb-1938-48d5-a174-7446e1694c9f',
    'router_path' => 'uuid',
    'link_title' => 'Names',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_names:uuid/node/51d788bb-1938-48d5-a174-7446e1694c9f',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_people:uuid/node/9adf83df-b9ab-4a92-b950-2f0ea669abc3.
  $menu_links['main-menu_people:uuid/node/9adf83df-b9ab-4a92-b950-2f0ea669abc3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/9adf83df-b9ab-4a92-b950-2f0ea669abc3',
    'router_path' => 'uuid',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_people:uuid/node/9adf83df-b9ab-4a92-b950-2f0ea669abc3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_welcome:uuid/node/32dd9e74-c22d-4e60-b35b-21e482d8ed8d',
  );
  // Exported menu link: main-menu_references:<front>.
  $menu_links['main-menu_references:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'References',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_references:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_registration:uuid/node/fc1f5edc-6a6a-44f2-b4cb-196856864e4a.
  $menu_links['main-menu_registration:uuid/node/fc1f5edc-6a6a-44f2-b4cb-196856864e4a'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/fc1f5edc-6a6a-44f2-b4cb-196856864e4a',
    'router_path' => 'uuid',
    'link_title' => 'Registration',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_registration:uuid/node/fc1f5edc-6a6a-44f2-b4cb-196856864e4a',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_how-to-use:uuid/node/102059cd-5636-41c3-b156-0bb7e0defe8b',
  );
  // Exported menu link: main-menu_search:uuid/node/ba3a7420-a64a-49a5-ab19-e2d3af66be4a.
  $menu_links['main-menu_search:uuid/node/ba3a7420-a64a-49a5-ab19-e2d3af66be4a'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/ba3a7420-a64a-49a5-ab19-e2d3af66be4a',
    'router_path' => 'uuid',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_search:uuid/node/ba3a7420-a64a-49a5-ab19-e2d3af66be4a',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_how-to-use:uuid/node/102059cd-5636-41c3-b156-0bb7e0defe8b',
  );
  // Exported menu link: main-menu_use:uuid/node/fcafecba-2b81-4b00-9739-33390edaa117.
  $menu_links['main-menu_use:uuid/node/fcafecba-2b81-4b00-9739-33390edaa117'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/fcafecba-2b81-4b00-9739-33390edaa117',
    'router_path' => 'uuid',
    'link_title' => 'Use',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_use:uuid/node/fcafecba-2b81-4b00-9739-33390edaa117',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_how-to-use:uuid/node/102059cd-5636-41c3-b156-0bb7e0defe8b',
  );
  // Exported menu link: main-menu_view:uuid/node/0fa89890-ceb3-4e8d-990d-ba9b4289ea18.
  $menu_links['main-menu_view:uuid/node/0fa89890-ceb3-4e8d-990d-ba9b4289ea18'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/0fa89890-ceb3-4e8d-990d-ba9b4289ea18',
    'router_path' => 'uuid',
    'link_title' => 'View',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_view:uuid/node/0fa89890-ceb3-4e8d-990d-ba9b4289ea18',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_how-to-use:uuid/node/102059cd-5636-41c3-b156-0bb7e0defe8b',
  );
  // Exported menu link: main-menu_welcome:uuid/node/32dd9e74-c22d-4e60-b35b-21e482d8ed8d.
  $menu_links['main-menu_welcome:uuid/node/32dd9e74-c22d-4e60-b35b-21e482d8ed8d'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/32dd9e74-c22d-4e60-b35b-21e482d8ed8d',
    'router_path' => 'uuid',
    'link_title' => 'Welcome',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_welcome:uuid/node/32dd9e74-c22d-4e60-b35b-21e482d8ed8d',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-browse_announcements:uuid/node/d24f40d1-4a41-47b9-88d3-4e92bbf60c9c.
  $menu_links['menu-browse_announcements:uuid/node/d24f40d1-4a41-47b9-88d3-4e92bbf60c9c'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'uuid/node/d24f40d1-4a41-47b9-88d3-4e92bbf60c9c',
    'router_path' => 'uuid',
    'link_title' => 'Announcements',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-browse_announcements:uuid/node/d24f40d1-4a41-47b9-88d3-4e92bbf60c9c',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-browse_collections:islandora.
  $menu_links['menu-browse_collections:islandora'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Collections',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-browse_collections:islandora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-browse_countries:uuid/node/15b230c6-fa96-4246-b251-f087d9455966.
  $menu_links['menu-browse_countries:uuid/node/15b230c6-fa96-4246-b251-f087d9455966'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'uuid/node/15b230c6-fa96-4246-b251-f087d9455966',
    'router_path' => 'uuid',
    'link_title' => 'Countries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-browse_countries:uuid/node/15b230c6-fa96-4246-b251-f087d9455966',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-browse_depositors:uuid/node/ff41d08e-a581-4370-b9d7-366e30f9cd12.
  $menu_links['menu-browse_depositors:uuid/node/ff41d08e-a581-4370-b9d7-366e30f9cd12'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'uuid/node/ff41d08e-a581-4370-b9d7-366e30f9cd12',
    'router_path' => 'uuid',
    'link_title' => 'Depositors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-browse_depositors:uuid/node/ff41d08e-a581-4370-b9d7-366e30f9cd12',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-browse_language-codes:uuid/node/b96de16b-5c04-4ed8-b9a2-b2f3060d0334.
  $menu_links['menu-browse_language-codes:uuid/node/b96de16b-5c04-4ed8-b9a2-b2f3060d0334'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'uuid/node/b96de16b-5c04-4ed8-b9a2-b2f3060d0334',
    'router_path' => 'uuid',
    'link_title' => 'Language Codes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-browse_language-codes:uuid/node/b96de16b-5c04-4ed8-b9a2-b2f3060d0334',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-browse_languages:uuid/node/65a75655-f56c-4e73-a8c7-2b52050e8eb6.
  $menu_links['menu-browse_languages:uuid/node/65a75655-f56c-4e73-a8c7-2b52050e8eb6'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'uuid/node/65a75655-f56c-4e73-a8c7-2b52050e8eb6',
    'router_path' => 'uuid',
    'link_title' => 'Languages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-browse_languages:uuid/node/65a75655-f56c-4e73-a8c7-2b52050e8eb6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-user_log-out:user/logout.
  $menu_links['menu-user_log-out:user/logout'] = array(
    'menu_name' => 'menu-user',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log Out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-user_log-out:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-user_my-account:user.
  $menu_links['menu-user_my-account:user'] = array(
    'menu_name' => 'menu-user',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-user_my-account:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-user_my-bookmarks:islandora-bookmark.
  $menu_links['menu-user_my-bookmarks:islandora-bookmark'] = array(
    'menu_name' => 'menu-user',
    'link_path' => 'islandora-bookmark',
    'router_path' => 'islandora-bookmark',
    'link_title' => 'My Bookmarks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-user_my-bookmarks:islandora-bookmark',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('AILLA papers');
  t('Access');
  t('Announcements');
  t('Browse');
  t('Citations');
  t('Collection');
  t('Collections');
  t('Conditions');
  t('Contact');
  t('Countries');
  t('Country');
  t('Data Mgmt Plan');
  t('Delivery');
  t('Depositor');
  t('Depositors');
  t('Disclaimers');
  t('Download');
  t('Events');
  t('Formats');
  t('Help');
  t('History');
  t('How to Use');
  t('Keyword Search');
  t('LG Code');
  t('Language');
  t('Language Codes');
  t('Languages');
  t('License');
  t('Log Out');
  t('Metadata');
  t('Mission');
  t('My Account');
  t('My Bookmarks');
  t('Names');
  t('People');
  t('References');
  t('Registration');
  t('Search');
  t('Use');
  t('View');
  t('Welcome');

  return $menu_links;
}
