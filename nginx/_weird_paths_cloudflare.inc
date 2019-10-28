  # Cloudflare

  rewrite  ^/dns-query                                          $redirect_ssl_host_url/ permanent;
