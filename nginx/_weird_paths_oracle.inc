  # Oracle

  rewrite  ^/apex/                                              $redirect_ssl_host_url/ permanent; # Oracle Apex Listener
  rewrite  ^/ords/                                              $redirect_ssl_host_url/ permanent; # Oracle REST Data Services
  rewrite  ^/wls_utc                                            $redirect_ssl_host_url/ permanent; # Oracle Test Client Without the IDE
