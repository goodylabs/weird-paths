  # Hermes AI

  rewrite  ^/\.hermes/auth\.json$                               $redirect_ssl_host_url/ permanent; # Hermes AI auth file
  rewrite  ^/\.hermes/\.env$                                    $redirect_ssl_host_url/ permanent; # Hermes AI .env
  rewrite  ^/\.hermes/config\.yaml$                             $redirect_ssl_host_url/ permanent; # Hermes AI Config
