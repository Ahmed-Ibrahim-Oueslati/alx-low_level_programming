#!/bin/bash

# Function to process a directory
process_dir() {
  local dir="$1"

  # Enter the directory
  cd "$dir" || return

  # Compile all .c files into .o files
  for file in *.c; do
    gcc -c "$file" -o "${file%.c}.o" || return
  done

  # Create the library archive
  ar rcs libmy.a *.o || return

  # Copy the library to the current directory (optional)
  cp libmy.a ../

  # Exit the directory
  cd ..
}

# Process all directories in the current directory
for dir in ./*; do
  # Check if it's a directory and not a file
  if [[ -d "$dir" ]]; then
    process_dir "$dir"
  fi
done

# Copy the final library archive to the current directory (optional)
cp ./libmy.a .

