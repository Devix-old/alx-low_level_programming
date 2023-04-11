#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Duplicates a string
 * @str: Pointer to the input string
 *
 * Return: Pointer to the duplicated string, or NULL if allocation fails or if str is NULL
 */
char *_strdup(char *str)
{
char *str_copy;
int i, len;
if (str == NULL)
{
return (NULL);
}
while (str[i])
{
len++;
}
str_copy = malloc(sizeof(char) * (len + 1));
if (str_copy == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
str_copy[i] = str[i];
}
str_copy[len] = '\0';
return (str_copy);
}
