#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* like putchar */
int _putchar(char c);
/* convert binary number to unsigned int */
unsigned int binary_to_uint(const char *b);
/* prints the binary representation of a number */
void print_binary(unsigned long int n);
/* return the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);




















#endif
