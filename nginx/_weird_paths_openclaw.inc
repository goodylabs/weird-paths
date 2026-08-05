  # OpenClaw AI agent

  rewrite  ^/\.openclaw/\.env$                                  $redirect_ssl_host_url/ permanent; # config
  rewrite  ^/\.openclaw/openclaw\.json$                         $redirect_ssl_host_url/ permanent; # config
