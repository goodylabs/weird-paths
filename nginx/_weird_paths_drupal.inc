  # Drupal

  rewrite  ^/avatar_uploader\.pages\.inc                        $redirect_ssl_host_url/ permanent; # CVE-2022-50957
  rewrite  ^/core/misc/drupal\.js                               $redirect_ssl_host_url/ permanent;
  rewrite  ^/misc/drupal\.js                                    $redirect_ssl_host_url/ permanent;
