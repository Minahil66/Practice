#!/usr/bin/env bash
n="$*"
len=${#n}
flag=false
seen=""
if [[ -z "${n//[[:space:]]/}" ]]; then
echo "true"
exit 0
fi
for((i=0;i<len;i++)); do
char="${n:i:1}"
if [[ "${n:$i:1}" == "-" ]] || [[ "${n:i:1}" == " " ]]; then
continue
fi
char_lower="${char,,}"
 if [[ "$seen" == *"$char_lower"* ]]; then #check if char appears anywhere in the seen
 flag=true
 break 
 fi
 seen+="$char_lower"
 done
 if [[ $flag == true ]]; then
 echo "false"
 else 
 echo "true"
 fi
 
 