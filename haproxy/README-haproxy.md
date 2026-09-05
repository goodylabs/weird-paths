# HAPROXY

## Config example

```
frontend my_frontend
    bind *:80
    mode http

    # Include the redirect map
    map /etc/haproxy/redirects.map redirect_location

    # Set a variable based on the map
    http-request set-var(req.redirect_location) %[redirect_location] if { path -m found / }

    # Redirect based on the variable
    http-request redirect location %[var(req.redirect_location)] if { var(req.redirect_location) -m found / }
```