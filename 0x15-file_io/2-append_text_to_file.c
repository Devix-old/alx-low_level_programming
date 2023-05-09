#include "main.h"
#include <sys/stat.h>
/**
 * append_text_to_file - Appends text content to an existing file.
 * @filename: The name of the file to append to.
 * @text_content: The text to append to the file.
 *
 * Return: On success, 1. On failure, -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, i = 0;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		w = write(o, text_content, i);
	}
	if (o == -1 || w == -1)
	{
		close(o);
		return (-1);
	}
	close(o);
	return (1);
}
