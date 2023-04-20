#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything based on format specified
 * @format: format string containing types of arguments
 *		c: char
 *		i: integer
 *		f: float
 *		s: char* (if the string is NULL, print (nil) instead
 *		any other char should be ignored
 * Return: void
 */
void print_all(const char * const format, ...)
{
int i = 0;
va_list args;
char *s;
va_start(args, format);
while (format[i] != '\0' && format != NULL)
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
s = "(nil)";
printf("%s", s);
break;
default:
i++;
continue;
}
if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
format[i] == 's') && format[(i + 1)] != '\0'){
printf(", ");
}
i++;
}
va_end(args);
printf("\n");
}

