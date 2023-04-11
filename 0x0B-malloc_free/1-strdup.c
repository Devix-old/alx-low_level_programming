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
char *dup;
if (str == NULL) {
return NULL;
}
dup = malloc(strlen(str) + 1);
if (dup == NULL) {
return NULL;
}
strcpy(dup, str);
    return dup;
}
