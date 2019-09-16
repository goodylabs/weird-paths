  # Exchange

  rewrite  ^/MAPI/API                                           $redirect_ssl_host_url/ permanent;
  rewrite  ^/OWA-AUTODISCOVER-EWS                               $redirect_ssl_host_url/ permanent;

