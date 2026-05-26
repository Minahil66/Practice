#!/usr/bin/env bash

name=$1
if [[ $# -eq 0 ]]; then
    echo "One for you, one for me."
else   
    echo "One for $name, one for me."
fi