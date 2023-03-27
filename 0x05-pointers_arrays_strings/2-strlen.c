/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
int x = 100;
int i = 0;
while (x != 0)
{
x = s[i];
i++;
}
return (i - 1);
}
