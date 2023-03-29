#include <string.h>
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters in a string to uppercase
 * @str: pointer to the string
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
int len_str = strlen(str);
char *ptr = str; /* initialize pointer to the first element of the array*/
int i;
for (i = 0; i < len_str; i++)
{
if (*ptr >= 'a' && *ptr <= 'z')
*ptr -= 32;
ptr++;
}
return (str);
}
