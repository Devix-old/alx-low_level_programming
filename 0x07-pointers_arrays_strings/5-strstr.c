#include <string.h>
/**
 * _strstr - Locates a substring.
 * @haystack: String to be searched.
 * @needle: Target substring to be located.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
if (needle_len == 0)
{
return haystack;
}
int i, j;
int len_haystack = strlen(haystack);
int len_needle = strlen(needle);
for (i = 0; i < len_haystack; i++)
{
if (haystack[i] == needle[0])
{
for (j = 0; j < len_needle; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (j == len_needle)
{
return (haystack + i);
}
}
}
return (NULL);
}
