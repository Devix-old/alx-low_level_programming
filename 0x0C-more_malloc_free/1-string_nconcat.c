#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * @n: The maximum number of bytes of s2 to concatenate
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1, len2, concat_len;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
n = len2;
concat_len = len1 + n + 1;
concat = malloc(concat_len *sizeof(char));
if (concat == NULL)
return (NULL);
memcpy(concat, s1, len1);
memcpy(concat + len1, s2, n);
concat[len1 + n] = '\0';
return (concat);
}
