  # Bash

  rewrite  ^/\.bashrc$                                          $redirect_ssl_host_url/ permanent; # Bash run commands
  rewrite  ^/(.*)\.sh$                                          $redirect_ssl_host_url/ permanent; # Bash scripts
