  # IAM

  rewrite  ^/iam/                                               $redirect_ssl_host_url/ permanent;
