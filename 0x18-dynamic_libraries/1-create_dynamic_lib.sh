#!/bin/bash
gcc -wall -wextr -werror -pendatic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
