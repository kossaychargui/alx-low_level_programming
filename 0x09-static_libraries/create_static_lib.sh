#!/bin/bash
gcc -Wall -Wextra -Werror -pendantic -c *.c
ar rcs liball.a *.o 
