#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to be scanned
 * @accept: pointer to the string containing the characters to match
 *
 * Return: the number of characters in the initial segment of s that consist
 *         only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
int counter = 0;
int len_s = strlen(s);
int len_accept = strlen(accept);
for (i = 0; i < len_s; i++)
{
for (j = 0; j < len_accept; j++)
{
if (*(s + i) == *(accept + j))
{
counter++;
break;
}
}
if (j == len_accept)
break;
}
return (counter);
}
