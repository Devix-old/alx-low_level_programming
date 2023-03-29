#include <string.h>
/**
 * _strcmp - Compare two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: 15 if s1 is greater than s2, -15 if s1 is less than s2, 0 otherwise
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int len_s1 = strlen(s1);
int len_s2 = strlen(s2);
int s1_count = 0, s2_count = 0;
int result;
for (i = 0; i < len_s1; i++)
{
s1_count += (int) s1[i];
}
for (i = 0; i < len_s2; i++)
{
s2_count += (int) s2[i];
}
result = s1_count - s2_count;
return ((char) result);
}
