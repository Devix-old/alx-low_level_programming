#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point for the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments passed to the program
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc > 4)
{
printf("Erreur\n");
return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
result = get_op_func(argv[2])(num1, num2);
printf("%d\n", result);
return (0);
}
