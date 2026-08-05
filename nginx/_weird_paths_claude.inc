  # Claude

  rewrite  ^/\.claude.json$                                     $redirect_ssl_host_url/ permanent; # Claude config
  rewrite  ^/\.claude/settings.json$                            $redirect_ssl_host_url/ permanent; # Claude config
