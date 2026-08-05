  # GraphQL

  rewrite  ^/api/graphql$                                       $redirect_ssl_host_url/ permanent;
  rewrite  ^/graphql$                                           $redirect_ssl_host_url/ permanent;
