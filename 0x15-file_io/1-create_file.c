#include "main.h"
/**
 * create_file - This function create file if dosent exist and write to it
 * @filename: Name of the file
 * @text_content: the text to write to the file
 * Return: return -1 on failureand 1 on succes
 */
int create_file(const char *filename, char *text_content)

{
	int o, w;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
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
