  # Panasonic cameras based on http://www.ispyconnect.com/man.aspx?n=panasonic

  rewrite  ^/axis-cgi/mjpg/video\.cgi                           $redirect_ssl_host_url/ permanent;
  rewrite  ^/cam/realmonitor                                    $redirect_ssl_host_url/ permanent;
  rewrite  ^/CgiStart                                           $redirect_ssl_host_url/ permanent;
  rewrite  ^/cgi-bin/camera                                     $redirect_ssl_host_url/ permanent;
  rewrite  ^/cgi-bin/jpeg                                       $redirect_ssl_host_url/ permanent;
  rewrite  ^/cgi-bin/mjpeg                                      $redirect_ssl_host_url/ permanent;
  rewrite  ^/cgi-bin/nphContinuousServerPush                    $redirect_ssl_host_url/ permanent;
  rewrite  ^/cgi-bin/snapshot\.cgi                              $redirect_ssl_host_url/ permanent;
  rewrite  ^/jpeg/qvga\.jpg                                     $redirect_ssl_host_url/ permanent;
  rewrite  ^/liveimg\.cgi                                       $redirect_ssl_host_url/ permanent;
  rewrite  ^/MediaInput/h264                                    $redirect_ssl_host_url/ permanent;
  rewrite  ^/MediaInput/mpeg4                                   $redirect_ssl_host_url/ permanent;
  rewrite  ^/MJPEG\.CGI                                         $redirect_ssl_host_url/ permanent;
  rewrite  ^/nphMotionJpeg                                      $redirect_ssl_host_url/ permanent;
  rewrite  ^/nphMpeg4                                           $redirect_ssl_host_url/ permanent;
  rewrite  ^/ONVIF/MediaInput                                   $redirect_ssl_host_url/ permanent;
  rewrite  ^/SnapShotJPEG                                       $redirect_ssl_host_url/ permanent;
  rewrite  ^/snapshot                                           $redirect_ssl_host_url/ permanent;
  rewrite  ^/VideoInput                                         $redirect_ssl_host_url/ permanent;
  rewrite  ^/videostream\.asf                                   $redirect_ssl_host_url/ permanent;
