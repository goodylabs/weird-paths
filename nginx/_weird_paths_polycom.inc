  # Polycom

  rewrite  ^/Polycom                                            $redirect_ssl_host_url/ permanent;
  rewrite  ^/p/000000000000\.cfg                                $redirect_ssl_host_url/ permanent;
  rewrite  ^/polycom                                            $redirect_ssl_host_url/ permanent;
  rewrite  ^/provisioning/000000000000\.cfg                     $redirect_ssl_host_url/ permanent;
