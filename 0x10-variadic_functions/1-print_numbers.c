#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print integers separated by a specified separator
 * @separator: the string used to separate the numbers
 * @n: the number of integers to print
 * @...: variable number of arguments of type int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int i;
va_list args;
va_start(args, n);
if (separator == NULL)
{
for (i = 0; i < 4; i++)
{
printf("%d", va_arg(args, int));
}
}
else
{
for (i = 0; i < 4; i++)
{
printf("%d", va_arg(args, int));
if (i != 3)
{
printf("%s", separator);
}
}
}
va_end(args);
printf("\n");
}
