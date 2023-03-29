#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;
int len_s = strlen(src);
int len_d = strlen(dest);
int len_final = len_s + len_d;
for (i = len_d, j = 0; i <= len_final; i++, j++)
{
dest[i] = src[j];
}
dest[len_final] = '\0';
return (dest);
}
