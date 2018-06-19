#!/bin/bash

LS=`which ls`
MV=`which mv`
SED=`which sed`
TEE=`which tee`

tempIFS=$IFS
IFS="
"

README_LOCATION="../README.md"
NEW_README_LOCATION="../README.md.new"

cd ../nginx

rules=($(${LS} -1 _weird_paths_*.inc))

#${SED} '/\# list of includes/,/\# end of include list/{//!d;}' ${README_LOCATION} > ${NEW_README_LOCATION}

${SED} '/\# list of includes/q' ${README_LOCATION} > ${NEW_README_LOCATION}
echo "" >> ${NEW_README_LOCATION}

for rule in "${rules[@]}"
do
  echo "include conf.d/${rule}" >> ${NEW_README_LOCATION}
done

echo "" >> ${NEW_README_LOCATION}

${SED} -n '/\# end of include list/,$p' ${README_LOCATION} >> ${NEW_README_LOCATION}

${MV} ${NEW_README_LOCATION} ${README_LOCATION}

IFS=$tempIFS
