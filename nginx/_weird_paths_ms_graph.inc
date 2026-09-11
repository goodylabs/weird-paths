  # MS Graph

  rewrite  ^/auditEvents                                        $redirect_ssl_host_url/ permanent;
  rewrite  ^/deviceManagement/auditEvents                       $redirect_ssl_host_url/ permanent;
