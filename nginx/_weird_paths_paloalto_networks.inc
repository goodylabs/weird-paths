  # PaloAlto Networks

  rewrite  ^/global-protect/login.esp                           $redirect_ssl_host_url/ permanent;
