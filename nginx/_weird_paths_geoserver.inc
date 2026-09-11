  # GeoServer - https://github.com/geoserver/geoserver

  rewrite  ^/geoserver/ows                                      $redirect_ssl_host_url/ permanent;
  rewrite  ^/geoserver/wfs                                      $redirect_ssl_host_url/ permanent;
