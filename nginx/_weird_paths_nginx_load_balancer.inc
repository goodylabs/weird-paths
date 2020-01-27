  # nginx dynamic configuration API - https://docs.nginx.com/nginx/admin-guide/load-balancer/dynamic-configuration-api/

  rewrite  ^/api/1/http/upstreams                               $redirect_ssl_host_url/ permanent;
