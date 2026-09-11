  # SSL certs

  rewrite  ^/cert/(.*)\.pem                                     $redirect_ssl_host_url/ permanent;
  rewrite  ^/cert/(.*)\.txt                                     $redirect_ssl_host_url/ permanent;
  rewrite  ^/certificates/(.*)\.key                             $redirect_ssl_host_url/ permanent;
  rewrite  ^/certificates/(.*)\.p12                             $redirect_ssl_host_url/ permanent;
  rewrite  ^/certificates/(.*)\.pfx                             $redirect_ssl_host_url/ permanent;
  rewrite  ^/certs/(.*)\.pem                                    $redirect_ssl_host_url/ permanent;
  rewrite  ^/certs/(.*)\.key                                    $redirect_ssl_host_url/ permanent;
  rewrite  ^/keys/(.*)\.pem                                     $redirect_ssl_host_url/ permanent;
  rewrite  ^/home/ubuntu/%2essh/cert%2epem                      $redirect_ssl_host_url/ permanent;
  rewrite  ^/host\.key$                                         $redirect_ssl_host_url/ permanent;
  rewrite  ^/localhost\.key$                                    $redirect_ssl_host_url/ permanent;
  rewrite  ^/portals/%2egit/config                              $redirect_ssl_host_url/ permanent;
  rewrite  ^/private-key$                                       $redirect_ssl_host_url/ permanent;
  rewrite  ^/private-key.key$                                   $redirect_ssl_host_url/ permanent;
  rewrite  ^/private\.pem                                       $redirect_ssl_host_url/ permanent;
  rewrite  ^/private/(.*)\.key                                  $redirect_ssl_host_url/ permanent;
  rewrite  ^/server\.key                                        $redirect_ssl_host_url/ permanent;
  rewrite  ^/ssl_key\.txt                                       $redirect_ssl_host_url/ permanent;
  rewrite  ^/ssl\.txt\.                                         $redirect_ssl_host_url/ permanent;
  rewrite  ^/ssl/(.*)\.pem                                      $redirect_ssl_host_url/ permanent;
  rewrite  ^/ssl/private/(.*)\.pem                              $redirect_ssl_host_url/ permanent;
