#!/bin/bash

# Get the C file name from the $CFILE environment variable
c_file=$CFILE

# Check if the C file exists
if [ ! -f "$c_file" ]; then
    echo "C file '$c_file' does not exist."
    exit 1
fi

# Generate the assembly code using gcc
gcc -S -masm=intel "$c_file" -o "${c_file%.c}.s"

# Check if the assembly code generation was successful
if [ $? -eq 0 ]; then
    echo "Assembly code generated successfully. Output file: ${c_file%.c}.s"
else
    echo "Failed to generate assembly code."
fi

