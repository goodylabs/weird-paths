  # Vercel

  rewrite  ^//\$\(pwd\)/vercel%2ejson                           $redirect_ssl_host_url/ permanent;
