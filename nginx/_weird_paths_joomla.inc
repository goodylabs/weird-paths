  # Joomla

  rewrite ^/Joomla                                              $redirect_ssl_host_url/ permanent;
  rewrite ^/joomla                                              $redirect_ssl_host_url/ permanent;
  rewrite ^/templates/system/css                                $redirect_ssl_host_url/ permanent;
