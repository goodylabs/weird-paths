  # Console

  rewrite  ^/console$                                           $redirect_ssl_host_url/ permanent;
  rewrite  ^/console/                                           $redirect_ssl_host_url/ permanent;
