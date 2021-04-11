#!/bin/bash -e

if [ $# -gt 1 ]; then
	echo $1
else
	echo "Nie podano parametru";
fi
