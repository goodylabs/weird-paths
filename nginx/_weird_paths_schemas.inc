  # SCHEMAS

  rewrite  /(.*)/\$SCHEMAS\$$                                   $redirect_ssl_host_url/ permanent;
