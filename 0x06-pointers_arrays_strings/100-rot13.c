#include <string.h>
#include <stdio.h>

/**
 * rot13 - Applies the rot13 substitution cipher to a string
 *
 * @str: Pointer to the string to be ciphered
 *
 * Return: Pointer to the ciphered string
 */
char *rot13(char *str)
{
char *ptr = str;
int i, y, len;
char alpha[] = {'a', 'b', 'c', 'd', 'e', '
f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
len = strlen(str);
for (i = 0; i < len; i++)
{
for (y = 0; y < 65 ; y++)
{
if (*ptr == alpha[y] || *ptr - 32 == alpha[y])
{
*ptr = alpha[y + 13];
break;
}
}
ptr++;
}
return (str);
}
