  # Novell

  rewrite  ^/(.*)\.NLM$                                         $redirect_ssl_host_url/ permanent; # http://www.novell.com/support/kb/doc.php?id=10071961
  rewrite  ^/(.*)\.nlm$                                         $redirect_ssl_host_url/ permanent; # http://www.novell.com/support/kb/doc.php?id=10071961
