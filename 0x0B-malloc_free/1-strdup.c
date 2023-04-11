#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: Pointer to the input string
 *
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
int i;
int len = strlen(str);
char *str_copy;
str_copy = malloc(sizeof(char) * len + 1);
for (i = 0; i < len; i++)
{
str_copy[i] = str[i];
}
return (str_copy);
}
