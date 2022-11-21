#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/*reads a text file and prints it to the POSIX standard output */
ssize_t read_textfile(const char *filename, size_t letters);
/* create a file */
int create_file(const char *filename, char *text_content);




#endif
