  # Jolokia - remote JMX with JSON over HTTP - https://jolokia.org/

  rewrite  ^/jolokia                                            $redirect_ssl_host_url/ permanent;
