#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * set_string - Sets the value of a pointer to a char.
 * @s: A pointer to a pointer to a char.
 * @to: A pointer to a char.
 *
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
*s = to;
}
