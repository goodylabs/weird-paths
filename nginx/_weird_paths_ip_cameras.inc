  # IP cameras

  # MJPEG
  rewrite  ^/axis-cgi/mjpg/video\.cgi                           $redirect_ssl_host_url/ permanent;
  rewrite  ^/mjpeg                                              $redirect_ssl_host_url/ permanent;   # Sony

  # Still images
  rewrite  ^/oneshotimage1                                      $redirect_ssl_host_url/ permanent;   # Sony
  rewrite  ^/snap\.jpg                                          $redirect_ssl_host_url/ permanent;   # Bosch

  # CVE-2013-6117
  rewrite  ^/current_config/passwd                              $redirect_ssl_host_url/ permanent;   # Dahua DVR 2.608.0000.0 and 2.608.GV00.0