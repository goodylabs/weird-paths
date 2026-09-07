#!/usr/bin/env bash
set -euo pipefail

CONF_DIR="../nginx"
MAP_DIR="${CONF_DIR}/map"

# Ensure target dir exists
mkdir -p "${MAP_DIR}"

SED=`which sed`
SORT=`which sort`

# macOS setup
if [[ "$(uname -s)" == "Darwin" ]]; then
  echo "Behaving in a macOS-like OS..."
  SED=`which gsed`
  SORT=`which gsort`
else
  echo "Behaving in a Linux-like OS..."
fi

for inc_file in "${CONF_DIR}"/*.inc; do
    [ -e "$inc_file" ] || continue

    filename=$(basename "$inc_file" .inc)
    map_file="${MAP_DIR}/${filename}.map"

    echo "Converting file: $inc_file into $map_file"

    ${SED} -nE \
      -e 's/^[[:space:]]*location[[:space:]]+=[[:space:]]*([^[:space:]]+).*/"\1" 1;/p' \
      -e 's/^[[:space:]]*location[[:space:]]+([^=[[:space:]]+).*/~^\1 1;/p' \
      -e 's/^[[:space:]]*rewrite[[:space:]]+\^?([^[:space:]]+).*/~^\1 1;/p' \
      "$inc_file" | ${SORT} -u > "$map_file"

done
