#!/bin/bash

# Replace "your_file.txt" with the actual name of your file
file="list1"

# Use sed to remove double quotation marks
sed 's/\"//g' "$file" > temp.txt

# Overwrite the original file with the modified content
mv temp.txt "$file"

echo "Double quotation marks removed from $file."