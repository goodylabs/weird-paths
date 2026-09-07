  # WordPress

  rewrite  ^/wp-admin/                                          $redirect_ssl_host_url/ permanent; # Wordpress includes
  rewrite  ^/wp-content/                                        $redirect_ssl_host_url/ permanent; # Wordpress includes
  rewrite  ^/wp-includes/                                       $redirect_ssl_host_url/ permanent; # Wordpress includes
  rewrite  ^/wp-json/                                           $redirect_ssl_host_url/ permanent; # Wordpress includes
  rewrite  ^/wp-p\.php$                                         $redirect_ssl_host_url/ permanent; # Wordpress includes
  rewrite  ^/wp-p\.php7$                                        $redirect_ssl_host_url/ permanent; # Wordpress includes
