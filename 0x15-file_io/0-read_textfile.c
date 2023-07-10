#include "main.h"
/**
 * read_textfile - This function open, read a file and write his content
 * @filename: Name of the file
 * @letters: Number of letters to read and write
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int o, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(1024 * sizeof(char));

	if (buf == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(0, buf, strlen(buf));

	if ((o == -1) || (r == -1) || (w == -1))
		return (0);

	if (close(o) == -1)
		return (-1);

	free(buf);
	return (r);
}
