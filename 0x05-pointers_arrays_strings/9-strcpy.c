#include <stdio.h>
#include <string.h>
/**
 * _strcpy - Copies the string pointed to by src, including the terminating
 *           null byte, to the buffer pointed to by dest.
 * @dest: A pointer to the destination array where the content is to be copied.
 * @src: A pointer to the source string to be copied.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
int i;
int len = strlen(src);
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
