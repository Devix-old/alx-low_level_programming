#include <string.h>
/**
 * rev_string - reverses a string
 * @s: the string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
int i;
int len = strlen(s);
char *rev_s[len + 1];
int y = 0;
for (i = len - 1; i >= 0; i--)
{
rev_s[y] = s[i];
y++;
}
rev_s[y] = '\0';
for (i = 0; i <= len; i++)
{
s[i] = rev_s[i];
}
}
