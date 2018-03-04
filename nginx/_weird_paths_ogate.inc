  # OGate - Chinese Open Gateway

  rewrite  ^/nogHead                                            $redirect_ssl_host_url/ permanent;
  rewrite  ^/nogFoot                                            $redirect_ssl_host_url/ permanent;

