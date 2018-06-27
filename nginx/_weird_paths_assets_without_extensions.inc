  # All requests for assets without extensions
  rewrite  ^\/assets\/[^.]+$                                    $redirect_ssl_host_url/ permanent;
