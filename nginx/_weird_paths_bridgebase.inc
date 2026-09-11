  # BridgeBase.com - https://www.bridgebase.com/help/4/common/text/index.html?login

  rewrite  ^/bbo-admin/                                         $redirect_ssl_host_url/ permanent;
  rewrite  ^/bbo-rest/                                          $redirect_ssl_host_url/ permanent;
  rewrite  ^/bbo-search/                                        $redirect_ssl_host_url/ permanent;
  rewrite  ^/bbo-token/                                         $redirect_ssl_host_url/ permanent;
  rewrite  ^/bbo-vin/                                           $redirect_ssl_host_url/ permanent;
