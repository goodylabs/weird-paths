  # Solarwinds

  rewrite  ^/helpdesk/WebObjects/Helpdesk.woa                   $redirect_ssl_host_url/ permanent; # CVE-2025-40551
