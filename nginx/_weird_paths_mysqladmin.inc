  # MySQLAdmin

  rewrite  ^/MyAdmin                                            $redirect_ssl_host_url/ permanent;
  rewrite  ^/myadmin                                            $redirect_ssl_host_url/ permanent;
  rewrite  ^/mysql                                              $redirect_ssl_host_url/ permanent;
  rewrite  ^/MySQLDumper                                        $redirect_ssl_host_url/ permanent;
  rewrite  ^/mySqlDumper                                        $redirect_ssl_host_url/ permanent;
  rewrite  ^/mysqldumper                                        $redirect_ssl_host_url/ permanent;
