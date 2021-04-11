#!/bin/bash

if [ $(ls -l | grep -e "^-" | wc -l) -gt 5 ]; then
	echo "Wiecej niz piec plikow w bierzacym katalogu"
fi


