#include "main.h"

/**
 * create_file- create a file
 * @filename: pointer to name the new file
 * @text_content: content string
 *
 * Return: 1 success, -1 if failled
 */

int create_file(const char *filename, char *text_content)
{

	int fildes, count, l_write, result;

	count = 0;

	if (filename == NULL)
		return (-1);

	/* create and open file name filenam with rw_______ right */
	fildes = open(filename, O_CREAT | O_RDWR, 0600);
	if (fildes == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[count] != '\0')
		count++;

	l_write = write(fildes, text_content, count);

	if (l_write >= 0)
		result = 1;
	else
		result = -1;

	close(fildes);
	return (result);
}
