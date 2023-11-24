  # SSL certs

  rewrite  ^/cert/(.*)\.pem                                     $redirect_ssl_host_url/ permanent;
  rewrite  ^/cert/(.*)\.txt                                     $redirect_ssl_host_url/ permanent;
  rewrite  ^/certificates/(.*)\.key                             $redirect_ssl_host_url/ permanent;
  rewrite  ^/certificates/(.*)\.p12                             $redirect_ssl_host_url/ permanent;
  rewrite  ^/certificates/(.*)\.pfx                             $redirect_ssl_host_url/ permanent;
  rewrite  ^/certs/(.*)\.pem                                    $redirect_ssl_host_url/ permanent;
  rewrite  ^/certs/(.*)\.key                                    $redirect_ssl_host_url/ permanent;
  rewrite  ^/keys/(.*)\.pem                                     $redirect_ssl_host_url/ permanent;
  rewrite  ^/private\.pem                                       $redirect_ssl_host_url/ permanent;
  rewrite  ^/private/(.*)\.key                                  $redirect_ssl_host_url/ permanent;
  rewrite  ^/ssl_key\.txt                                       $redirect_ssl_host_url/ permanent;
  rewrite  ^/ssl\.txt.                                         $redirect_ssl_host_url/ permanent;
  rewrite  ^/ssl/(.*)\.pem                                      $redirect_ssl_host_url/ permanent;
  rewrite  ^/ssl/private/(.*)\.pem                              $redirect_ssl_host_url/ permanent;
