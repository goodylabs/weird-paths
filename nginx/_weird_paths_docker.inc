  # Docker

  rewrite  ^/\.docker/config\.json$                             $redirect_ssl_host_url/ permanent; # Docker config
  rewrite  ^/Dockerfile$                                        $redirect_ssl_host_url/ permanent; # Docker
