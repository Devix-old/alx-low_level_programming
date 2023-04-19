#include <stdio.h>
/**
 * print_name - Prints a name using a function pointer
 * @name: Pointer to a character string representing the name
 * @f: Pointer to a function that takes a character string as argument and returns void
 *
 * This function takes a character string pointer 'name' and a function pointer 'f',
 * and calls the function 'f' with 'name' as argument to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
(f(name));
}
