  # Git

  rewrite  ^/\.git/                                             $redirect_ssl_host_url/ permanent;
  rewrite  ^/gitweb                                             $redirect_ssl_host_url/ permanent;
