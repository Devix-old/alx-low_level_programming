#include <stdio.h>
#include <stdarg.h>
void print_all(const char * const format, ...)
{
int i = 0;
va_list args;
char *s;
va_start(args, format);
while (format[i] != '\0')
{
switch (format[i]) {
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
if (format[i + 1] != '\0') {
printf(", ");
}
i++;
}
va_end(args);
printf("\n");
}

