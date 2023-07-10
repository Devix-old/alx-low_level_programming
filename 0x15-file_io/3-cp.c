#include "main.h"
/**
 * _cp - Copies the contents of one file to another.
 * @file_from: The source file name.
 * @file_to: The destination file name.
 */
void _cp(char *file_from, char *file_to)
{
	int o, r, o_file_to;
	char buf[1024];

	o = open(file_from, O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	o_file_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (o_file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((r = read(o, buf, sizeof(buf))) > 0)
	{
		if (write(o_file_to, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(o) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", o);
		exit(100);
	}
	if (close(o_file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", o_file_to);
		exit(100);
	}
}
/**
 * main - Entry point of the program.
 * @ac: The number of command-line arguments.
 * @av: An array of command-line arguments.
 * Return: return(0)
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_cp(av[1], av[2]);

	return (0);
}
