#include "main.h"
/**
 * read_textfile - This function open, read a file and write his content
 * @filename: Name of the file
 * @letters: Number of letters to read and write
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int o, r, w, c;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(letters * sizeof(char));

	if (buf == NULL)

		o = open(filename, O_RDONLY);

	r = read(o, buf, letters);

	w = write(0, buf, strlen(buf));

	if ((o == -1) || (r == -1) || (w == -1))
	{
		close(o);
		free(buf);
		return (0);
	}
	c = close(o);
	if (c == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (r);
}
