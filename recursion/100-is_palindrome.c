#include "main.h"
#include <stdio.h>

/**
 * is_palindrome- test if a string is a palindrome or not
 * @s: character of the string
 *
 * Return: 1 if it is, 0 if not
 */

int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s);

	if (i <= 1)
		return (1);

	return (check_palindrome(s, i - 1, 0));
}

/**
 * _strlen_recursion- return the lenght of a string
 * @s: the string to measure
 *
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * check_palindrome- check if the string is a palindrome or not
 * @s: the string to test
 * @end: last value of the string
 * @i: first index of the string
 *
 * Return: 1 if is palindrome, 0 if not
 */

int check_palindrome(char *s, int end, int i)
{
	if (*(s + end) == *(s + i) && (i == end - 1 || i == end))
		return (1);
	if (*(s + end) != *(s + i))
		return (0);
	return (check_palindrome(s, end - 1, i + 1));
}
