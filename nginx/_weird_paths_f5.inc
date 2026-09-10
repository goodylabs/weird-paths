  # f5.com - WAF

  rewrite  ^/mgmt/                                              $redirect_ssl_host_url/ permanent;
