  # SQLite

  rewrite  ^/SQLite                                             $redirect_ssl_host_url/ permanent;
  rewrite  ^/SQlite                                             $redirect_ssl_host_url/ permanent;
  rewrite  ^/(.*).sqlite$                                       $redirect_ssl_host_url/ permanent;
