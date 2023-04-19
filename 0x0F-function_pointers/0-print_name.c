#include <stdio.h>
/**
 * print_name - Prints a name using a function pointer
 * @name: Pointer to a character string representing the name
 * @f: takes a character string as argument and returns void
 *
 * takes a character string pointer 'name' and a function pointer 'f',
 * calls the function 'f' with 'name' as argument to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
(f(name));
}
