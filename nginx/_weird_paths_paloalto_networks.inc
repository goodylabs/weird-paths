  # PaloAlto Networks

  rewrite  ^/global-protect/login.esp                           $redirect_ssl_host_url/ permanent;
  rewrite  ^/sslmgr$                                            $redirect_ssl_host_url/ permanent;
  rewrite  ^/unauth/%252e%252e/php/ztp_gate.php/PAN_help/x.css  $redirect_ssl_host_url/ permanent;
