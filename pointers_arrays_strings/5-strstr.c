#include "main.h"

/**
 * _strstr- find the first occurrence of a substring
 * @haystack: the string where search
 * @needle: searched substring
 *
 * Return: pointer beginning substring or null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
		return (haystack);

	/* while it have character in haystack */
	while (*(haystack + i))
	{
		i = 0;
		
		/* condition : compare the two string */
		if ((*(haystack + i)) == (*(needle + i)))
		{
			/* if character are egal it compare se next instead of diffrent to \0 */
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (*(haystack + i) == *(needle + i));
		}
		haystack++;
	}
	return ('\0');
}
