#include "main.h"
/**
 * read_textfile - function read and write the content a file
 * @filename: Name of the file to open.
 * @letters: Number of letters to print in the standar ouput.
 * Return: number of letter writed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int r, w, o;
	char *buf;

	if (filename == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	r = read(o, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		free(buf);
		return (0);
	}
	close(o);
	free(buf);
	return (w);
}
