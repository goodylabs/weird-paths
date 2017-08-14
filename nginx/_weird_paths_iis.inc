  # IIS

  rewrite  ^/W3SVC                                              $redirect_ssl_host_url/ permanent;

