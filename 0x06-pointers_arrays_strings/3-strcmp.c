#include <string.h>
/**
 * _strcmp - compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: 0 if s1 and s2 are equal, < 0 if s1 < s2, > 0 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
int i, result;
int len_s1 = strlen(s1);
int len_s2 = strlen(s2);
int final_len;
if (len_s1 > len_s2)
{
final_len = len_s1;
}
else
{
final_len = len_s2;
}
for (i = 0; i < final_len; i++)
{
if (s1[i] != s2[i])
{
result = (int) s1[i] - (int) s2[i];
break;
}
else
{
result = 0;
}
}
return (result);
}
