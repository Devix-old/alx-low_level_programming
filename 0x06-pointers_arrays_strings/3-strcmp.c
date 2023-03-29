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
char a[] = "hello";
char b[] = "world!";
int s1_count = 0, s2_count = 0;
for (int i = 0; i < strlen(s1); i++){
s1_count += (int) s1[i];
}
for (int i = 0; i < strlen(s2); i++){
s2_count += (int) s2[i];
}
int result = s1_count - s2_count;
return (result > 0 ? 15 :result<0 ? -15 :0);
}
