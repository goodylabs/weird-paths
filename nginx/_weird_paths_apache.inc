  # Apache httpd - https://httpd.apache.org/

  rewrite  ^/(%2e)+.*etc/passwd                                 $redirect_ssl_host_url/ permanent; # Apache 2.4.49 Directory Traversal Vulnerability (CVE-2021-41773)
  rewrite  ^/(%2e%2e%5c)+.*etc/passwd                           $redirect_ssl_host_url/ permanent; # Apache 2.4.49 Directory Traversal Vulnerability (CVE-2021-41773)
