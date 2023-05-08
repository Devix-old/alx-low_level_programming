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
