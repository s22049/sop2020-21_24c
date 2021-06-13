#!/bin/bash	

files=$(ls -1)

for f in $files; do

    NAME="${f%.*}"
    EXT="${f##*.}"

    if [[ ${EXT} == "c" ]]; then
    cc $f -o $NAME
    fi

done