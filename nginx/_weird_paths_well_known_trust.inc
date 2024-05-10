  # Well Known

  rewrite  ^/trust.txt                                          $redirect_ssl_host_url/ permanent;
  rewrite  ^/.well-known/trust.txt                              $redirect_ssl_host_url/ permanent;
