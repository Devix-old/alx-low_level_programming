#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: Pointer to the input string
 *
 * Return: the duplicated string, or NULL if allocation fails
 */
char *_strdup(char *str)
{
if (str == NULL)
{
return (NULL);
}
int i;
int len = strlen(str);
char *str_copy = malloc(sizeof(char) * (len + 1));
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
