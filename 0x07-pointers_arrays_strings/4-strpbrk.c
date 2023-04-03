#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to a string to search.
 * @accept: pointer to a string of characters to search for.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
int len_accept = strlen(accept);
while (*s != '\0') {
while (*accept != '\0') {
if (*s == *accept) {
return (s);
}
accept++;
}
accept = accept - len_accept;
s++;
}
return (NULL);
}
