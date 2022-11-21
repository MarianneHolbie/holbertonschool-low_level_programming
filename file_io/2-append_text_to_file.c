#include "main.h"

/**
 * append_text_to_file- appends text at the end of a file
 * @filename: point name of file
 * @text_content: text to append
 *
 * Return: 1 success, -1 failled
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fildes, count;

	if (filename == NULL)
		return (-1);

	/* open file, point to the end */
	fildes = open(filename, O_RDWR | O_APPEND);
	if (fildes == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	/* count length of string to add */
	while (text_content[count] != '\0')
		count++;

	write(fildes, text_content, count);

	close(fildes);
	return (1);
}
