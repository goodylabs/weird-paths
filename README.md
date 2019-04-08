# weird-paths
This set of weird paths grouped by technology that can be handled by front web servers and therefore such requests do not enter backend servers.

## Supported web servers

1. nginx with rewrite rules

### nginx rewrite rules

You need to provide `$redirect_ssl_host_url` variable in your configuration to make these rewrites work.

Example of using weird-paths in your nginx config like in `/etc/nginx/sites-enabled/my-site` file:

```
set $redirect_ssl_host_url "https://www.google.com";

# list of includes

include conf.d/_weird_paths_adobe.inc
include conf.d/_weird_paths_alexa.inc
include conf.d/_weird_paths_apache_portal.inc
include conf.d/_weird_paths_asp.inc
include conf.d/_weird_paths_assets_without_extensions.inc
include conf.d/_weird_paths_bash.inc
include conf.d/_weird_paths_bitcoin.inc
include conf.d/_weird_paths_cfg.inc
include conf.d/_weird_paths_cgi.inc
include conf.d/_weird_paths_cisco.inc
include conf.d/_weird_paths_coldfusion.inc
include conf.d/_weird_paths_db4web.inc
include conf.d/_weird_paths_dbm.inc
include conf.d/_weird_paths_domain_analyzer.inc
include conf.d/_weird_paths_exe.inc
include conf.d/_weird_paths_exploits.inc
include conf.d/_weird_paths_favicon.inc
include conf.d/_weird_paths_fts.inc
include conf.d/_weird_paths_git.inc
include conf.d/_weird_paths_gpon_home_routers.inc
include conf.d/_weird_paths_hp.inc
include conf.d/_weird_paths_html.inc
include conf.d/_weird_paths_iis.inc
include conf.d/_weird_paths_ip_cameras.inc
include conf.d/_weird_paths_ip_phones.inc
include conf.d/_weird_paths_java.inc
include conf.d/_weird_paths_jboss.inc
include conf.d/_weird_paths_joomla.inc
include conf.d/_weird_paths_kubernetes.inc
include conf.d/_weird_paths_lighttpd.inc
include conf.d/_weird_paths_lua.inc
include conf.d/_weird_paths_ms_exchange.inc
include conf.d/_weird_paths_ms_sharepoint.inc
include conf.d/_weird_paths_ms_word.inc
include conf.d/_weird_paths_mysqladmin.inc
include conf.d/_weird_paths_nonweb_images.inc
include conf.d/_weird_paths_novell.inc
include conf.d/_weird_paths_ogate.inc
include conf.d/_weird_paths_oracle.inc
include conf.d/_weird_paths_panasonic_cameras.inc
include conf.d/_weird_paths_passwd.inc
include conf.d/_weird_paths_perl.inc
include conf.d/_weird_paths_php.inc
include conf.d/_weird_paths_polycom.inc
include conf.d/_weird_paths_sap.inc
include conf.d/_weird_paths_sftp.inc
include conf.d/_weird_paths_simatic_s7.inc
include conf.d/_weird_paths_sitemap.inc
include conf.d/_weird_paths_sqlite.inc
include conf.d/_weird_paths_status.inc
include conf.d/_weird_paths_struts.inc
include conf.d/_weird_paths_subversion.inc
include conf.d/_weird_paths_txt.inc
include conf.d/_weird_paths_visual_studio_code.inc
include conf.d/_weird_paths_weblogic.inc
include conf.d/_weird_paths_win_ini.inc
include conf.d/_weird_paths_wordpress.inc
include conf.d/_weird_paths_xml.inc
include conf.d/_weird_paths_xsql.inc

# end of include list
```

Ready to use examples are in `examples` directory.
