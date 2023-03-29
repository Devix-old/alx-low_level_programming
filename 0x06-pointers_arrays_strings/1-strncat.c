#include <stdio.h>
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concatenate
 *
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
int len_s = strlen(src);
int len_d = strlen(dest);
int len_n = len_d + n;
for (i = len_d, j = 0; i <= len_n; i++, j++)
{
dest[i] = src[j];
}
dest[len_n] = '\0';
return (dest);
}
