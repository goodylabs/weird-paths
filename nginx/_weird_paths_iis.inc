  # IIS

  rewrite  ^/RDWeb/                                             $redirect_ssl_host_url/ permanent;
  rewrite  ^/W3SVC                                              $redirect_ssl_host_url/ permanent;

