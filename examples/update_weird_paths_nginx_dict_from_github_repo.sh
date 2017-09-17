#!/bin/bash

AWK=`which awk`
CAT=`which cat`
CURL=`which curl`
RM=`which rm`
SCP=`which scp`
SSH=`which ssh`
WC=`which wc`
SOURCE_WEIRD_PATHS_FILE="_weird_paths_custom.inc"

WEIRD_PATHS_URL="https://raw.githubusercontent.com/goodylabs/weird-paths/master/nginx/"

WEIRD_PATHS_MODULES=( \
  "apache_portal" \
  "asp" \
  "bitcoin" \
  "exploits" \
  "html" \
  "iis" \
  "ip_cameras" \
  "java" \
  "joomla" \
  "lua" \
  "ms_exchange" \
  "ms_word" \
  "mysqladmin" \
  "panasonic_cameras" \
  "php" \
  "sap" \
  "sftp" \
  "sqlite" \
  "status" \
  "struts" \
  "txt" \
  "xml" \
)

## DO NOT EDIT BELOW THIS LINE ###

echo ""

SOURCE_WEIRD_PATHS_FILE="_weird_paths_custom.inc"
WEIRD_PATHS_FILE="_weird_paths.inc"

echo -n "" > ${WEIRD_PATHS_FILE}

NEXT_PART_FILE=".__next_part_file"

# 1. Fetch modules from github repo to one local file
for module in ${WEIRD_PATHS_MODULES[@]}; do
  echo -n "" > ${NEXT_PART_FILE}
  echo -n "Fetching module ${module}..."
  ${CURL} -s "${WEIRD_PATHS_URL}/_weird_paths_${module}.inc" >> ${NEXT_PART_FILE}
  next_part_lines=`${WC} -l ${NEXT_PART_FILE} | ${AWK} '{print $1}'`
  echo -n "(${next_part_lines} lines)..."
  if [ ${next_part_lines} -lt 2 ]; then # if one line, then probably it's not a file content but an error message
    echo "[FAIL]"
    exit 1
  else
    ${CAT} ${NEXT_PART_FILE} >> ${WEIRD_PATHS_FILE}
    echo -e "\n" >> ${WEIRD_PATHS_FILE}
    echo "[DONE]"
  fi
done

# 2. Append with custom rewrite rules
${CAT} ${SOURCE_WEIRD_PATHS_FILE} >> ${WEIRD_PATHS_FILE}

# 3. Cleanup 
${RM} -f ${NEXT_PART_FILE}
