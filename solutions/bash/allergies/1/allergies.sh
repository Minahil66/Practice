#!/usr/bin/env bash

score=$1
mode=$2
allergen=$3

# Use indexed arrays to maintain order
allergens=(eggs peanuts shellfish strawberries tomatoes chocolate pollen cats)
values=(1 2 4 8 16 32 64 128)

if [[ "$mode" == "allergic_to" ]]; then
    # Find index of allergen
    for i in "${!allergens[@]}"; do
        if [[ "${allergens[i]}" == "$allergen" ]]; then
            if (( score & values[i] )); then
                echo "true"
            else
                echo "false"
            fi
            exit 0
        fi
    done
    echo "false"
    
elif [[ "$mode" == "list" ]]; then
    result=()
    for i in "${!allergens[@]}"; do
        if (( score & values[i] )); then
            result+=("${allergens[i]}")
        fi
    done
    echo "${result[@]}"
fi