  # DBm - The dbm library was a simple database engine, originally written by Ken Thompson and released in 1979. The name is a three letter acronym for DataBase Manager, and can also refer to the family of database engines with APIs and features derived from the original dbm.

  rewrite  ^/(.*)\.dbm                                          $redirect_ssl_host_url/ permanent;

