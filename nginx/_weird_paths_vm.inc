  # VM

  rewrite  ^/(.*)\.vm$                                          $redirect_ssl_host_url/ permanent;
