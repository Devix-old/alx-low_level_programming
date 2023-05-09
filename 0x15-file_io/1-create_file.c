#include "main.h"
#include <string.h>
#include <sys/stat.h>
/**
 * create_file - Creates a file and writes text to it
 * @filename: Name of file to create
 * @text_content: Text to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (o == -1)
	{
		close(o);
		return (-1);
	}

	if (text_content != NULL)
	{
		while (*text_content)
		{
			len++;
			text_content++;
		}
		w = write(o, text_content, len);
	}
	if (w == -1)
	{
		close(o);
		return (-1);
	}

	close(o);
	return (1);
}
