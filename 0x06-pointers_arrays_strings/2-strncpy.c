#include <string.h>
#include <stdio.h>
/**
 * _strncpy - copies the first n characters of the source string
 * to the destination string, with null-termination.
 * @dest: the destination string
 * @src: the source string
 * @n: the number of characters to copy
 *
 * Return: a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
for (i = 0; i <= n - 1 && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i ++){
dest[i] = '\0';
}
return (dest);
}
