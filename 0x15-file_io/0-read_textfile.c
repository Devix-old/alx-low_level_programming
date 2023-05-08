#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	int c;
	ssize_t printed_char = 0;

	file = fopen(filename, "r");
	if (filename == NULL)
		return (0);
	if (file == NULL)
		return (0);
	while (letters && !feof(file))
	{

		c = fgetc(file);
		if (c != EOF)
		{
			write(1, &c, 1);
			printed_char++;
		}
		letters--;
	}

	fclose(file);
	return (printed_char);
}
