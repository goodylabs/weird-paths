  # Drupal

  rewrite  ^/core/misc/drupal\.js                               $redirect_ssl_host_url/ permanent;
  rewrite  ^/misc/drupal\.js                                    $redirect_ssl_host_url/ permanent;
