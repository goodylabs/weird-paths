  # IP phones

  # EVOX
  rewrite  ^/evox/                                              $redirect_ssl_host_url/ permanent;

  # Snom Phone https://www.snom.com
  rewrite  ^/snom/                                              $redirect_ssl_host_url/ permanent;
