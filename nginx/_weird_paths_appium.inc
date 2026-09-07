  # Appium - https://appium.readthedocs.io/en/latest/en/commands/status/

  rewrite  ^/wd/hub/status                                      $redirect_ssl_host_url/ permanent;
