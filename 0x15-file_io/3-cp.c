#include "main.h"
#include <stdio.h>
#include <sys/stat.h>
/**
 * cp_ - Copies the content of one file to another
 * @file_from: Pointer to the file to copy from
 * @file_to: Pointer to the file to copy to
 *
 * Return: 0 on success, -1 on failure
 */
int cp_(const char *file_from, const char *file_to)
{
	int o, r, c;
	int o_to, w_to, i = 0, c_to;
	char buf[1024];
	mode_t filemode;

	if (file_from == NULL || file_to == NULL)
		return (-1);
	o = open(file_from, O_RDONLY);
	r = read(o, buf, 1024);
	while (buf[i])
	{
		i++;
	}
	if (r == -1 || o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(o);
		exit(98);
	}
	filemode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	o_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, filemode);

	w_to = write(o_to, buf, i - 1);
	if (o_to == -1 || w_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(o);
		close(o_to);
		exit(99);
	}
	c = close(o);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
		close(o_to);
		exit(100);
	}
	c_to = close(o_to);
	if (c_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o_to);
		exit(100);
	}
	return (0);
}
/**
 * main - Entry point
 * @ac: Argument count
 * @av: Array of pointers to argument strings
 *
 * Return: 0 on success, -1 on failure
 */
int main(int ac, const char **av)
{
	int rs;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	rs = cp_(av[1], av[2]);
	return (rs);
}
