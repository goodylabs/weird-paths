  # IP cameras

  # MJPEG
  rewrite  ^/axis-cgi/mjpg/video\.cgi                           $redirect_ssl_host_url/ permanent;
  rewrite  ^/mjpeg                                              $redirect_ssl_host_url/ permanent;   # Sony

  # Still images
  rewrite  ^/oneshotimage1                                      $redirect_ssl_host_url/ permanent;   # Sony
  rewrite  ^/snap\.jpg                                          $redirect_ssl_host_url/ permanent;   # Bosch

