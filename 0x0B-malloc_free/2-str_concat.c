char *str_concat(char *s1, char *s2)
{
int len = 0, i = 0, j = 0;
char *concat;
if (s1 == NULL && s2 == NULL )
{
return(NULL);
}
if (s1 != NULL)
{
while (s1[i] != '\0')
{
len++;
    i++;
}
}
i = 0;
if (s2 != NULL)
{
while (s2[i] != '\0')
{
len++;
i++;
}
}
concat = malloc(sizeof(char) * (len + 1));
if (concat == NULL)
{
return(NULL);
}
i = 0
if (s1 != NULL)
{
while (s1[i] != '\0')
{
concat[j] = s1[i];
i++;
j++;
}
}
i = 0; // reset i to zero
if (s2 != NULL)
{
while (s2[i] != '\0')
{
concat[j] = s2[i];
i++;
j++;
}
}
concat[j] = '\0';
return(concat);
}
