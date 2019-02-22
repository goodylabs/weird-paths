  # JBoss

  rewrite  ^/jbossmq-httpil/HTTPServerILServlet                 $redirect_ssl_host_url/ permanent;
  rewrite  ^/securityRealm/user/admin/descriptorByName          $redirect_ssl_host_url/ permanent;
