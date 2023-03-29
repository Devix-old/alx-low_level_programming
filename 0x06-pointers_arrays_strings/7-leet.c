#include <string.h>
#include <stdio.h>
/**
 * leet - Encodes a string into 1337 (leet) speak.
 *
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
char *ptr = str;
int i, y;
int len = strlen(str);
char tab[] = {'a', 'e', 'o', 't', 'l', '4', '3', '0', '7', '1'};
for (i = 0; i < len; i++)
{
for (y = 0; y < 5; y++)
{
if (*ptr == tab[y] || *ptr - 32 == tab[y])
{
*ptr = tab[y + 5];
}
}
ptr++;
}
return (str);
}
