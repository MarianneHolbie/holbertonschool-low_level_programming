#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>

/* function putchar */
int _putchar(char);
/* function that print a name */
void print_name(char *name, void (*f)(char *));
/* function that execute function on each element of an array */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
