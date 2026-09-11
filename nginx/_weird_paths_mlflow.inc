  # mlflow - https://mlflow.org/docs/latest/api_reference/rest-api.html

  rewrite  ^/ajax-api/2.0/mlflow/                               $redirect_ssl_host_url/ permanent;

