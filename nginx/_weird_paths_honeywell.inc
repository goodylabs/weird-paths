  # Honeywell

  rewrite  ^/loadfile.lp                                        $redirect_ssl_host_url/ permanent; # CVE-2023-3710 PM43 loadfile.lp file command execution vulnerability