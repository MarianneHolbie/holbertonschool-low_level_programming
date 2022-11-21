#include "main.h"

/**
 * read_textfile- read text file and prints it to the POSIX standart output
 * @filename: point to the text file
 * @letters: number of letters to print
 *
 * Return: 0 if failed, number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes, l_read, l_write;
	char *temp; /* buffer to stock letters */

	if (filename == NULL)
		return (0);

	/* fildes : file descriptor */
	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
		return (0);

	/* create space memory to stock letter read and print */
	temp = malloc(letters * sizeof(char) + 1);
	if (temp == NULL)
		return (0);

	/* l_read number of bytes read */
	l_read = read(fildes, temp, letters);

	temp[l_read] = '\0'; /* end of string */

	if (l_read == 0)
	{
		free(temp);
		return (0);
	}

	l_write = write(STDOUT_FILENO, temp, l_read);

	close(fildes);
	free(temp);
	return (l_write);
}
