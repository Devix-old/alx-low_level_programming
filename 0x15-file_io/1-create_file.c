#include "main.h"
#include <string.h>
#include <sys/stat.h>
int create_file(const char *filename, char *text_content)
{
	int o, w, len;
	mode_t filemode;

	if (filename == NULL)
		return (-1);
	len = strlen(text_content);
	filemode = S_IRUSR | S_IWUSR;
	o = open(filename, O_WRONLY | O_CREAT | O_EXCL, filemode);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	return (1);
	close(o);
}
