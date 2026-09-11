  # Hewlett Packard

  rewrite  ^/(.*)\.ovpl$                                        $redirect_ssl_host_url/ permanent;
  rewrite  ^/mfpadmin/                                          $redirect_ssl_host_url/ permanent; # CVE-2021-3942
