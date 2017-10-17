  # EXE

  rewrite  ^/(.*)\.exe$                                         $redirect_ssl_host_url/ permanent;
  rewrite  ^/(.*)\.exe/                                         $redirect_ssl_host_url/ permanent;
