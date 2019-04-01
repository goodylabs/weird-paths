  # Kubernetes

  rewrite  ^/deployment-config\.json                            $redirect_ssl_host_url/ permanent;
  rewrite  ^/api/v1/pods                                        $redirect_ssl_host_url/ permanent;
