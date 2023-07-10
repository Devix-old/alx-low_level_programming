#include "main.h"
/**
 * append_text_to_file - This function append text to a given file
 * @filename: The file to append to it
 * @text_content: The text to append to the file
 * Return: Return -1 on failure and 1 on succes
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);
	if (text_content != NULL)
	{
		w = write(o, text_content, strlen(text_content));
		if (w == -1)
			return (-1);
	}
	close(o);
	return (1);
}
