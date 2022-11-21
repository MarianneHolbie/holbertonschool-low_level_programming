#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/* function that reads a text file and prints it to the POSIX standard output */
ssize_t read_textfile(const char *filename, size_t letters);





#endif
