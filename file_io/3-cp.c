#include "main.h"

/**
 * main- copies the content of a file to another file
 * @argc: count of arguments
 * @argv: table of argument
 *
 * Return: posix standard error
 */

int main(int argc, char *argv[])
{
	int source, destination, in = 0, out = 1, cl_source, cl_dest;
	char buffer[1024];

	if (argc != 3) /* number arg not correct */
	{	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source = open(argv[1], O_RDONLY); /* read source file */
	if (source < 0)
	{	dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	destination = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (out > 0)
	{	in = read(source, buffer, 1024);
		if (in < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		out = write(destination, buffer, in);
		if (out != in)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	cl_source = close(source);
	cl_dest = close(destination);
	if (cl_source < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
	}
	if (cl_dest < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination);
		exit(100);
	}
	return (0);
}



