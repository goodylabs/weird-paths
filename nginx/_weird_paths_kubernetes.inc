  # Kubernetes

  rewrite  ^/deployment-config\.json                            $redirect_ssl_host_url/ permanent;
  rewrite  ^/api/v1/pod$                                        $redirect_ssl_host_url/ permanent;
  rewrite  ^/api/v1/pods                                        $redirect_ssl_host_url/ permanent;
  rewrite  ^/secrets\.json$                                     $redirect_ssl_host_url/ permanent;
  rewrite  ^/secrets\.yml$                                      $redirect_ssl_host_url/ permanent;
