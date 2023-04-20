#include "3-calc.h"
#include <stddef.h>
#include <string.h>
/**
 * get_op_func - selects the appropriate function to perform the operation
 * @s: operator passed as argument
 *
 * Return: pointer to the function that performs the operation
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;
    
    while (ops[i].op != NULL)
    {
        if (strcmp(ops[i].op, s) == 0)
        {
            return (ops[i].f);
            break;
        }
        i++;
    }
    return(NULL);
}
