  # JWT

  rewrite  ^/jwt/                                               $redirect_ssl_host_url/ permanent;
  rewrite  ^/var/jwt/                                           $redirect_ssl_host_url/ permanent;

