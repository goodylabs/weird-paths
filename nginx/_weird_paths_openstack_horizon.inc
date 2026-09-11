  # OpenStack Horizon - https://docs.openstack.org/horizon/latest/

  rewrite  ^/horizon/auth/login/                                $redirect_ssl_host_url/ permanent;
