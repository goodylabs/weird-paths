  # SFTP

  # Some SFTP/FTP clients store SFTP/FTP connection details such as hostname,
  # username, password in text files. For example Sublime SFTP is creating 
  # a file named sftp-config.json, FileZilla is storing the information in a 
  # file named recentservers.xml.

  # based on https://www.acunetix.com/vulnerabilities/web/sftp-ftp-credentials-exposure

  rewrite  ^/recentservers\.xml              $redirect_ssl_host_url/ permanent;
  rewrite  ^/sftp-config\.json               $redirect_ssl_host_url/ permanent;


