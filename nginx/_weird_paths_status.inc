  # Status

  rewrite  ^/stats                                              $redirect_ssl_host_url/ permanent;
  rewrite  ^/status                                             $redirect_ssl_host_url/ permanent;
  rewrite  ^/stauts                                             $redirect_ssl_host_url/ permanent;
