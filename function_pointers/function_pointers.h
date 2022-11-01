#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* function putchar */
int _putchar(char);
/* function that print a name */
void print_name(char *name, void (*f)(char *));

#endif
