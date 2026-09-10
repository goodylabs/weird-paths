  # TeleMessage - acquired by https://www.smarsh.com/

  rewrite  ^/heapdump$                                          $redirect_ssl_host_url/ permanent; # CVE-2025-48927
