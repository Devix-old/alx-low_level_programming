#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there*/
/**
 * main - prints all alphabet in lower case x 10.
 *
 * Return: Always 0 (Success)
 */

int main(void) {

int print_sign(int n)
{
    if (n > 0){
        putchar('+');
        return (1);
    }
    if (n == 0){
        putchar('=');
        return (0);
    }
    if (n < 0){
        putchar('-');
        return (-1);
    }
}
}

