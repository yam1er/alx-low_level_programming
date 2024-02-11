#!/bin/bash

# Compile the source files into object files
gcc -fPIC -c *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

