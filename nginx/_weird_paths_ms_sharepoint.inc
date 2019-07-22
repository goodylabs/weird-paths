  # MS Sharepoint

  rewrite  ^/adfs/                                              $redirect_ssl_host_url/ permanent; # ADFS 3.0
  rewrite  ^/_VTI_BIN/WSTS/                                     $redirect_ssl_host_url/ permanent; # SharePoint WebServices