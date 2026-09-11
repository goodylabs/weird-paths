  # Git

  rewrite  ^/\.git/                                             $redirect_ssl_host_url/ permanent;
  rewrite  ^/\.git-credentials$                                 $redirect_ssl_host_url/ permanent;
  rewrite  ^/\.gitconfig$                                       $redirect_ssl_host_url/ permanent;
  rewrite  ^/\.github/\.env$                                    $redirect_ssl_host_url/ permanent;

  rewrite  ^/gitweb                                             $redirect_ssl_host_url/ permanent;
