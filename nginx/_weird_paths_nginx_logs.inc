  # nginx logs - https://docs.nginx.com/nginx/admin-guide/monitoring/logging/

  rewrite  ^/var/log/debug.log                                  $redirect_ssl_host_url/ permanent;
