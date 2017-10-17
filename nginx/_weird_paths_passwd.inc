  # /etc/passwd

  rewrite  ^/(.*)/etc/passwd$                                   $redirect_ssl_host_url/ permanent;