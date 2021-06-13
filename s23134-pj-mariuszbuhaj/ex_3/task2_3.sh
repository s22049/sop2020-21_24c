#!/bin/bash

files=$(ls -1)
IFS=$'\n'
for f in $files; do
    echo "Proszę państwa oto plik: $f"
done	