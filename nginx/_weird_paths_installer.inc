  # Installer

  rewrite  ^/install/                                           $redirect_ssl_host_url/ permanent;
  rewrite  ^/installer/                                         $redirect_ssl_host_url/ permanent;
