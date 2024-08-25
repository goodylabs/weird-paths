  # Check Point Security Gateways

  rewrite  ^/clients/MyCRL                                      $redirect_ssl_host_url/ permanent; #CVE-2024-24919
