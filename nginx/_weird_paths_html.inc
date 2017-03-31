  # HTML

  rewrite  ^/html                                               $redirect_ssl_host_url/ permanent;

  rewrite  ^/(.*)\.htm$                                         $redirect_ssl_host_url/ permanent;
  rewrite  ^/(.*)\.html$                                        $redirect_ssl_host_url/ permanent;
  rewrite  ^/(.*)\.shtml$                                       $redirect_ssl_host_url/ permanent;