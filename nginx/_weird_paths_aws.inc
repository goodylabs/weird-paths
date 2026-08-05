  # AWS

  rewrite  ^/\.aws/credentials$                                 $redirect_ssl_host_url/ permanent; # AWS credentials
  rewrite  ^/\.aws/config$                                      $redirect_ssl_host_url/ permanent; # AWS config
  rewrite  ^/\.boto$                                            $redirect_ssl_host_url/ permanent; # AWS SDK Boto3
  rewrite  ^/\.s3cfg$                                           $redirect_ssl_host_url/ permanent; # AWS S3 Config
