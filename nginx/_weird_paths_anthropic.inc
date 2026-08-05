  # Anthropic

  rewrite  ^/.config/anthropic/credentials/default.json$        $redirect_ssl_host_url/ permanent; # Anthropic default credentials

