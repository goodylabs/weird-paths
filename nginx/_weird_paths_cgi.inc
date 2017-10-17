  # CGI

  rewrite  ^/(.*)/cgi-bin                                       $redirect_ssl_host_url/ permanent;
