#ifndef MAIN_H
#define MAIN_H

/* function  that allocates memory using malloc */
void *malloc_checked(unsigned int b);
/* function that concatenates two strings but only n bytes of the second */
char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif
