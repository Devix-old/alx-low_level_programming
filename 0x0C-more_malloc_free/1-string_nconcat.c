#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *tab;
int len_s1, len_s2;
len_s1 = strlen(s1);
len_s2 = strnlen(s2, n);
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
tab = malloc((len_s1 + n + 1) * sizeof(char));
if (tab == NULL)
{
return (NULL);
}
memcpy(tab, s1, len_s1);
memcpy(tab + len_s1, s2, len_s2);
tab[len_s2 + len_s1] = '\0';
return (tab);
}
