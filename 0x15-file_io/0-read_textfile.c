#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{

	int o, r, w;
	char *buf;

	if (filename = NULL)
		return (0);

	buf = malloc(1024 * sizeof(char));

	if (buf == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(0, buf, strlen(buf));

	if ((o == -1) || (r == -1) || (w == -1))
		return (0);

	free(buf);

	return (r);
}
