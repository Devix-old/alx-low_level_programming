#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: input string
 * Return: void
 */
void puts_half(char *str)
{
int i, len, start;
len = strlen(str);
if (len % 2 == 0)
{
start = len / 2;
}
else{
start = (len + 1) / 2;
}
for (i = start; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
}

