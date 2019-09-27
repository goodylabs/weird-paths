  # JAVA

  rewrite  ^/axis2/$                                            $redirect_ssl_host_url/ permanent;
  rewrite  ^/axis2/services                                     $redirect_ssl_host_url/ permanent;
  rewrite  ^/hudson                                             $redirect_ssl_host_url/ permanent;
  rewrite  ^/jenkins                                            $redirect_ssl_host_url/ permanent;
  rewrite  ^/jmx-console                                        $redirect_ssl_host_url/ permanent;
  rewrite  ^/sdk$                                               $redirect_ssl_host_url/ permanent;
  rewrite  ^/servlet                                            $redirect_ssl_host_url/ permanent;
  rewrite  ^/system/console$                                    $redirect_ssl_host_url/ permanent;
  rewrite  ^/(.*)\.jsf$                                         $redirect_ssl_host_url/ permanent;
  rewrite  ^/(.*)\.jsp$                                         $redirect_ssl_host_url/ permanent;
  rewrite  ^/(.*)\.jspa$                                        $redirect_ssl_host_url/ permanent;
