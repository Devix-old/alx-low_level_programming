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
	mode_t filemode;

	if (filename == NULL)
		return (-1);
	len = strlen(text_content);
	filemode = S_IRUSR | S_IWUSR;
	o = open(filename, O_WRONLY | O_CREAT, filemode);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);
	if (open(filename, O_EXCL) == -1)
	{
		truncate(filename, w);
	}
	return (1);
	close(o);
}
