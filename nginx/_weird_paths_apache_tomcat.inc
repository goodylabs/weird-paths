  # Apache Tomcat

  rewrite  ^/jkstatus                                           $redirect_ssl_host_url/ permanent; # JK Status Manager

