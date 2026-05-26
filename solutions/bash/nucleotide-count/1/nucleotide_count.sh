#!/usr/bin/env bash
n="$1"
if [[ "$n" =~ [^ACGT] ]] && [[ -n "$n" ]]; then
    echo "Invalid nucleotide in strand"
    exit 1
    fi
for base in A C G T; do
    count=$(echo "$n" | grep -o "$base" | wc -l)
    echo "$base: $count"
done