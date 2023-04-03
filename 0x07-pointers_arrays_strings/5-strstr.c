#include <string.h>
/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to beginning of substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
int len_haystack = strlen(haystack);
while (*needle != '\0')
{
while (*haystack != '\0')
{
if (*haystack == *needle)
{
return (haystack);
}
haystack++;
}
haystack = haystack - len_haystack;
needle++;
}
return (NULL);
}

