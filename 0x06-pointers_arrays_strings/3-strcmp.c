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
int i, y, s1_counter, s2_counter,
result, len_s1, len_s2;
s2_counter = 0;
s1_counter = 0;
len_s1 = strlen(s1);
len_s2 = strlen(s2);
for (i = 0; i < len_s1; i++)
{
for (y = 0; y < len_s2; y++)
{
if (s1[i] > s2[y])
{
s1_counter += 1;
}
else if (s1[i] < s2[y])
{
s2_counter += 1;
}
}
}
result = s1_counter - s2_counter;
return (result);
}
