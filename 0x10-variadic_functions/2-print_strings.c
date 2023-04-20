#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings separated by a specified separator
 * @separator: the string used to separate the strings
 * @n: the number of strings to print
 * @...: variable number of arguments of type int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%s", va_arg(args, char*));
if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
