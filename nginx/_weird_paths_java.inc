  # JAVA

  rewrite  ^/hudson                                             $redirect_ssl_host_url/ permanent;
  rewrite  ^/jenkins                                            $redirect_ssl_host_url/ permanent;
  rewrite  ^/jmx-console                                        $redirect_ssl_host_url/ permanent;
  rewrite  ^/(.*)\.jsp$                                         $redirect_ssl_host_url/ permanent;