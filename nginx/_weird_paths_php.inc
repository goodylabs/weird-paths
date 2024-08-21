  # PHP

  rewrite  ^/ab2h                                               $redirect_ssl_host_url/ permanent;
  rewrite  ^/ab2g                                               $redirect_ssl_host_url/ permanent;

  rewrite  ^/admin/(.*)\.php$                                   $redirect_ssl_host_url/ permanent;
  rewrite  ^/(.*)phpinfo(.*)$                                   $redirect_ssl_host_url/ permanent;

  # supposedly Ukrainian exploit to PHP vulnerabilities or misconfigurations
  rewrite  ^/muieblackcat                                       $redirect_ssl_host_url/ permanent;

  rewrite  ^/php                                                $redirect_ssl_host_url/ permanent;
  rewrite  ^/phph                                               $redirect_ssl_host_url/ permanent;
  rewrite  ^/phppath                                            $redirect_ssl_host_url/ permanent;

  # ZemEu - http://www.whitehat.ro
  rewrite  ^/phpMyAdmi                                          $redirect_ssl_host_url/ permanent;
  rewrite  ^/phpmyadmin                                         $redirect_ssl_host_url/ permanent;

  rewrite  ^/roundcube                                          $redirect_ssl_host_url/ permanent;

  rewrite  ^/sys-cgi                                            $redirect_ssl_host_url/ permanent;

  # vBulletin - https://www.vbulletin.org/forum/portal.php
  rewrite  ^/vb5/                                               $redirect_ssl_host_url/ permanent;
  rewrite  ^/vbulletin/                                         $redirect_ssl_host_url/ permanent;
  rewrite  ^/vbulletin5/                                        $redirect_ssl_host_url/ permanent;

  rewrite  ^/(.*)phpmyadmin(.*)$                                $redirect_ssl_host_url/ permanent;
  rewrite  ^/(.*)\.cgi$                                         $redirect_ssl_host_url/ permanent;
  rewrite  ^/(.*)\.php$                                         $redirect_ssl_host_url/ permanent;

