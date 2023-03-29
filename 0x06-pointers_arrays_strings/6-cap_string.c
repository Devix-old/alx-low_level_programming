#include <string.h>
#include <stdio.h>
/**
 * cap_string - capitalizes all words in a string
 * @str: pointer to the string to capitalize
 *
 * Return: pointer to the capitalized string
 */

char *cap_string(char *str)
{
int len_str = strlen(str);
char *ptr = str;
int i;
for (i = 0; i < len_str; i++)
{
if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
*ptr == ';' || *ptr == '.' || *ptr == '"' || *ptr == '(' ||
*ptr == ')' || *ptr == '{' || *ptr == '}')
{
if (*ptr == '\t')
{
*ptr = ' ';
}
ptr++;
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr -= 32;
}
else
{
ptr--;
}
}
ptr++;
}
ptr[i] = '\0';
return (str);
}

