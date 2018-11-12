  # MS Sharepoint

  rewrite  ^/adfs/                                              $redirect_ssl_host_url/ permanent; # ADFS 3.0
