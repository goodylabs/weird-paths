  # MS Sharepoint

  rewrite  ^/_admin/                                            $redirect_ssl_host_url/ permanent;
  rewrite  ^/_db/                                               $redirect_ssl_host_url/ permanent;
  rewrite  ^/_VTI_BIN/WSTS/                                     $redirect_ssl_host_url/ permanent; # SharePoint WebServices
  rewrite  ^/adfs/                                              $redirect_ssl_host_url/ permanent; # ADFS 3.0
