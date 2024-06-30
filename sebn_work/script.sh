#!/bin/bash

# Check if a file is provided as an argument
if [ $# -ne 1 ]; then
    echo "Usage: $0 <filename>"
    exit 1
fi

# Check if the file exists
if [ ! -f "$1" ]; then
    echo "Error: File '$1' not found"
    exit 1
fi

# Read the contents of the file, replace newlines, and print
while IFS= read -r line; do
    echo -n "\"$line\", "
done < "$1"

# Print a newline at the end
echo
