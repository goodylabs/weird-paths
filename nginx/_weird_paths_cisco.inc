  # Cisco

  rewrite  ^/+CSCOE+/                                           $redirect_ssl_host_url/ permanent;
  rewrite  ^/dfcweb/lib/                                        $redirect_ssl_host_url/ permanent;
