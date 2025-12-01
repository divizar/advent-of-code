#!/bin/bash

year=$1
day=$2

file="$year/day$day/solution.cpp"
input="$year/day$day/input.txt"
output="run_day$day"

if [ ! -f "$file" ]; then
    echo "Solution file not found: $file"
    exit 1
fi

g++ -std=c++17 "$file" -O2 -o "$output"

if [ $? -eq 0 ]; then
    echo "Compiled successfully!"
    if [ -f "$input" ]; then
        echo "Running with input.txt..."
        ./"$output" < "$input"
    else
        echo "No input file found. Running without input..."
        ./"$output"
    fi
else
    echo "Compilation failed!"
fi

