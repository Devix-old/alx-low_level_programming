#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: the number of arguments
 * @av: an array of pointers to the arguments
 *
 * Return: a pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
int i, len, j, count = 0;
char *tab;
int total_len = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
total_len = strlen(av[i]) + total_len + 1;
}
tab = malloc(total_len *sizeof(char));
if (tab == NULL)
{
free(tab);
return (NULL);
}
for (i = 0; i < ac; i++)
{
len = strlen(av[i]);
for (j = 0; j < len; j++)
{
tab[count++] = av[i][j];
}
tab[count++] = '\n';
}
tab[count] = '\0';
return (tab);
}
