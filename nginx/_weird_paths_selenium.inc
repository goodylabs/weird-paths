  # Selenium Grid

  rewrite  ^/grid/console                                       $redirect_ssl_host_url/ permanent; # CVE-2020-23452
