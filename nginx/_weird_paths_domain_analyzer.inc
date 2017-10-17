  # Domain analyzer

  rewrite  ^/(.*)\.anydomain\.test                              $redirect_ssl_host_url/ permanent;

