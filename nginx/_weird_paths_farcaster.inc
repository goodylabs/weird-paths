  # Farcaster - https://miniapps.farcaster.xyz/docs/guides/publishing

  rewrite  ^/.well-known/farcaster.json$                        $redirect_ssl_host_url/ permanent;
