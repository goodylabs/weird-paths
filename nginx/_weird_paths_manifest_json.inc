  # Manifest.json

  rewrite  ^/asset-manifest.json                                $redirect_ssl_host_url/ permanent;
  rewrite  ^/assets/manifest.json                               $redirect_ssl_host_url/ permanent;
  rewrite  ^/dist/manifest.json                                 $redirect_ssl_host_url/ permanent;
  rewrite  ^/manifest.json                                      $redirect_ssl_host_url/ permanent;
  rewrite  ^/static/manifest.json                               $redirect_ssl_host_url/ permanent;
