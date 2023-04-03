/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: pointer to the string to search in
 * @needle: pointer to the substring to find
 *
 * Return: pointer to the beginning of the found substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
int len_haystack = strlen(haystack);
int len_needle = strlen(needle);
for (i = 0; i < len_needle; i++)
{
for (j = 0; j < len_haystack; j++)
{
if (*haystack == *needle)
{
return (haystack);
}
haystack++;
}
haystack = haystack - len_haystack;
needle++;
}
return (NULL);
}
