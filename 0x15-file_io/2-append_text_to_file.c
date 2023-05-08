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
	int o, w;
	int len;
	len = strlen(text_content);
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
	{
		close(o);
		return (-1);
	}
	close(o);
	return (1);
}
