  # Sendgrid

  rewrite  ^/smtp/sendgrid%2Eyaml$                              $redirect_ssl_host_url/ permanent; # Sendgrid config

