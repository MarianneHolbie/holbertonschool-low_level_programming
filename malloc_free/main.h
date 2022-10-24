#ifndef MAIN_H
#define MAIN_H

/* function create an array of chars, and initializes it with a specific char */
char *create_array(unsigned int size, char c);
/* function return a pointer to a newly allocated space in memory contains string copy */
char *_strdup(char *str);
/* function that concatenates two strings */
char *str_concat(char *s1, char *s2);
/* function return length of a string */
int _strlen(char *s);


#endif
