#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @str: the string to be printed
 */
void puts2(char *str)
{
int i;
int len = strlen(str);
for (i = 0; i < len; i += 2)
{
putchar(str[i]);
}
}
