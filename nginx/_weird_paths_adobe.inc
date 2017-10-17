  # Adobe

  rewrite  ^/altercast                                          $redirect_ssl_host_url/ permanent; # Adobe Alter Cast - serwer for maintaining graphics
  rewrite  ^/flex2gateway                                       $redirect_ssl_host_url/ permanent; # Adobe Alter Cast - serwer for maintaining graphics
  rewrite  ^/(.*)/messagebroker                                 $redirect_ssl_host_url/ permanent; # https://github.com/rapid7/metasploit-framework/blob/master/modules/auxiliary/scanner/http/adobe_xml_inject.rb

