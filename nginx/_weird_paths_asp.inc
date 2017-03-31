  # ASP.NET

  rewrite  ^/manager                                            $redirect_ssl_host_url/ permanent;
  rewrite  ^/msd                                                $redirect_ssl_host_url/ permanent;

  rewrite  ^/networkmap/                                        $redirect_ssl_host_url/ permanent;

  rewrite  ^/Panel                                              $redirect_ssl_host_url/ permanent;
  rewrite  ^/pages/                                             $redirect_ssl_host_url/ permanent;
  rewrite  ^/PMA                                                $redirect_ssl_host_url/ permanent;
  rewrite  ^/PSIA                                               $redirect_ssl_host_url/ permanent;
  rewrite  ^/PSBlock                                            $redirect_ssl_host_url/ permanent;

  rewrite  ^/pma                                                $redirect_ssl_host_url/ permanent;

  rewrite  ^/program                                            $redirect_ssl_host_url/ permanent;
  rewrite  ^/psp                                                $redirect_ssl_host_url/ permanent;
  rewrite  ^/PSBlock                                            $redirect_ssl_host_url/ permanent;

  rewrite  ^/webdav                                             $redirect_ssl_host_url/ permanent;
  rewrite  ^/webindex                                           $redirect_ssl_host_url/ permanent;
  rewrite  ^/webmail                                            $redirect_ssl_host_url/ permanent;

  rewrite  ^/(.*)\.action$                                      $redirect_ssl_host_url/ permanent;
  rewrite  ^/(.*)\.asp$                                         $redirect_ssl_host_url/ permanent;
  rewrite  ^/(.*)\.aspx$                                        $redirect_ssl_host_url/ permanent;

