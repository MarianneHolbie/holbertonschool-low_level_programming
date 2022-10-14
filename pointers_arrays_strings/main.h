#include <unistd.h>

/* function print _putchar */
int _putchar(char);
/* function : pointer to an int and updates the value to 98 */
void reset_to_98(int *n);
/* function that swap the value of 2 integers */
void swap_int(int *a, int *b);
/* function that returns the length of a string */
int _strlen(char *s);
/* function to prints a string, followed by a new line */
void _puts(char *str);
/* function to prints a string in reverse */
void print_rev(char *s);
/* function to reverse a string */
void rev_string(char *s);
/* function that prints every other character of a string */
void puts2(char *str);
/* print half of a string */
void puts_half(char *str);
/* function that prints n elements of an array of integers */
void print_array(int *a, int n);
/* function that copies the string pointed to the buffer */
char *_strcpy(char *dest, char *src);
/* function to concatenate two strings */
char *_strcat(char *dest, char *src);
/* function to concatenate with n bytes from a string */
char *_strncat(char *dest, char *src, int n);
/* function to copy a string */
char *_strncpy(char *dest, char *src, int n);
/* function to compares two strings */
int _strcmp(char *s1, char *s2);
/* function that reverses the content of an array of integers */
void reverse_array(int *a, int n);

void print_array(int *a, int n);
/* changes all lowercase letters of a string to uppercase */
char *string_toupper(char *s);
/* function that capitalizes all words of a string */
char *cap_string(char *s);
/* function that encodes a string into 1337 */
char *leet(char *s);
/* function that fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);
/* function that copies n byte of memory area in other memory area */
char *_memcpy(char *dest, char *src, unsigned int n);
/* function that locates a character in a string */
char *_strchr(char *s, char c);
/* function that gets the length of a prefix substring */
unsigned int _strspn(char *s, char *accept);
/* function that searches a string for any of a set of bytes */
char *_strpbrk(char *s, char *accept);
/* function that locates a substring */
char *_strstr(char *haystack, char *needle);
/* function to print a chessboard */
void print_chessboard(char (*a)[8]);
/* function print the sum of the two diagonals of a square */
void print_diagsums(int *a, int size);

