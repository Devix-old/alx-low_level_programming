#include <stdio.h>
#include <string.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer value of the string
 */
int _atoi(char *s)
{
int len = strlen(s);
int num = 0;
int i, y = 1;
int check;
int minus_checker = -1;

for (i = len - 1; i >= 0; i--)
{
check = s[i];
minus_checker++;
if (check >= 48 && check <= 57)
{
num = (s[i] - 48) * y + num;
y = y * 10;
minus_checker--;
}
}
if (s[minus_checker] == '-')
{
num = num * -1;
}
return (num);
}
