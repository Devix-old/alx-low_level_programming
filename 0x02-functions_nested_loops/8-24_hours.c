#include <unistd.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there*/
/**
 * main - prints all alphabet in lower case x 10.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int x=0;
    int y=0;
void jack_bauer(void){
while(y<24){
    while (x<60){
        putchar(y/10+'0');
        putchar(y%10+'0');
        putchar(':');
        putchar(x/10+'0');
        putchar(x%10+'0');
        putchar('\n');

        x++;
    }
    x=0;
    y++;
}
}
return(0);
}

