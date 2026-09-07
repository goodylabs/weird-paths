SonicOS

  # SonicOS - https://www.sonicwall.com/support/technical-documentation/docs/sonicos-7-0-about/Content/login-page.htm

  rewrite  ^/sonicui/                                           $redirect_ssl_host_url/ permanent;
