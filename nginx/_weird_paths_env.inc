  # .env

  rewrite  ^/\.env/                                             $redirect_ssl_host_url/ permanent;

  rewrite  ^/\.env_1$                                           $redirect_ssl_host_url/ permanent;
  rewrite  ^/\.env_sample$                                      $redirect_ssl_host_url/ permanent;
  rewrite  ^/\.env\.bak$                                        $redirect_ssl_host_url/ permanent;
  rewrite  ^/\.env\.backup$                                     $redirect_ssl_host_url/ permanent;
  rewrite  ^/\.env\.example$                                    $redirect_ssl_host_url/ permanent;
  rewrite  ^/\.env\.example$                                    $redirect_ssl_host_url/ permanent;
  rewrite  ^/\.env\.live$                                       $redirect_ssl_host_url/ permanent;
  rewrite  ^/\.env\.local$                                      $redirect_ssl_host_url/ permanent;
  rewrite  ^/\.env\.(.*)\.local$                                $redirect_ssl_host_url/ permanent;
  rewrite  ^/\.env\.old$                                        $redirect_ssl_host_url/ permanent;
  rewrite  ^/\.env\.production$                                 $redirect_ssl_host_url/ permanent;
  rewrite  ^/\.env\.stage$                                      $redirect_ssl_host_url/ permanent;

  rewrite  ^/admin/\.env$                                       $redirect_ssl_host_url/ permanent;
  rewrite  ^/%2eenv%2eold$                                      $redirect_ssl_host_url/ permanent;
