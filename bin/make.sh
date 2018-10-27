#!/bin/bash
mkdir -p build
gcc src/main.c -o build/main.out -fno-stack-protector -Wl,-allow_stack_execute