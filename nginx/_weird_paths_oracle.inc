  # Oracle

  rewrite  ^/apex/                                              $redirect_ssl_host_url/ permanent; # Oracle Apex Listener
  rewrite  ^/ords/                                              $redirect_ssl_host_url/ permanent; # Oracle REST Data Services
  rewrite  ^/wls-wsat/CoordinatorPortType                       $redirect_ssl_host_url/ permanent; # Weblogic wls-wsat Component Deserialization Vulnerability (CVE-2017-10271) Detection and Exploitation Script
  rewrite  ^/wls_utc                                            $redirect_ssl_host_url/ permanent; # Oracle Test Client Without the IDE
