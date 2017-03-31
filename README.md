# weird-paths
This set of weird paths grouped by technology that can be handled by front web servers and therefore such requests do not enter backend servers.

## Supported web servers

1. nginx with rewrite rules

### nginx rewrite rules

You need to provide $redirect_ssl_host_url variable in your configuration to make these rewrites work.

Example of using weird-paths in your nginx config like in `/etc/nginx/sites-enables/my-site` file:

```
set $redirect_ssl_host_url "https://www.google.com";
include conf.d/_weird_paths_asp.inc;
include conf.d/_weird_paths_exploits.inc;
include conf.d/_weird_paths_html.inc;
include conf.d/_weird_paths_java.inc;
include conf.d/_weird_paths_joomla.inc;
include conf.d/_weird_paths_lua.inc;
include conf.d/_weird_paths_mysqladmin.inc;
include conf.d/_weird_paths_php.inc;
include conf.d/_weird_paths_sap.inc;
include conf.d/_weird_paths_sqlite.inc;
include conf.d/_weird_paths_status.inc;
include conf.d/_weird_paths_struts.inc;
include conf.d/_weird_paths_txt.inc;
include conf.d/_weird_paths_xml.inc;
```


