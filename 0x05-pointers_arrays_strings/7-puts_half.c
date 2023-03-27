#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: input string
 * Return: void
 */
void puts_half(char *str)
{
int i, len;
len = strlen(str);
for (i = (len - 1) / 2; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
}
