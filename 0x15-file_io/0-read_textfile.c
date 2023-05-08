#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to standard output
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: Number of letters actually read and printed, or 0 if an error occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int len_r, len_w, fd;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	len_r = read(fd, buf, letters);
	len_w = write(1, buf, len_r);

	if (len_r == -1 || len_w == -1 || fd == -1 || len_r != len_w)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (len_w);
}
