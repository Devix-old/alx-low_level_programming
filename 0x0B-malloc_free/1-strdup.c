#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char *_strdup(char *str)
{
    char *str_copy;
    int len = strlen(str);
    str_copy = malloc(sizeof(char) * (len + 1));
    if (str_copy == NULL)
    {
        printf("failed to allocate memory\n");
        return (NULL);
    }

    for (int i = 0; i <= len; i++)
    {
        str_copy[i] = str[i];
    }

    return str_copy;
}
