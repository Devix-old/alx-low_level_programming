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
	int fd;
	int len;

	fd = open(filename, O_RDONLY);
	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	if (read(fd, buf, letters) == -1)
		return (0);
	len = strlen(buf);
	if (write(1, buf, letters) == -1)
		return (0);

	free(buf);
	close(fd);
	return (len);
}
