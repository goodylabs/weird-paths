  # Struts

  rewrite  ^/struts2-showcase                                   $redirect_ssl_host_url/ permanent;
  rewrite  ^/(.*)\.do$                                          $redirect_ssl_host_url/ permanent; # Struts 1 request paths
