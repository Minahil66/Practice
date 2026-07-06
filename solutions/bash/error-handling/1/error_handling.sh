#!/usr/bin/env bash

if [[ $# -eq 0 ]]; then 
echo "Usage: error_handling.sh <person>"
exit 1
fi
if [[ $# -eq 1 ]]; then
value=$1
echo "Hello, $value"
exit 0
fi
echo "Usage: error_handling.sh <person>"
exit 1;
