#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -C *.c
ar -rc liball.a *.o
ranlib liball.a
