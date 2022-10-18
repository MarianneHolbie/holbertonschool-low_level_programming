#!/bin/bash

# compilation object file
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

# create static librarie
ar -rc liball.a *.o
