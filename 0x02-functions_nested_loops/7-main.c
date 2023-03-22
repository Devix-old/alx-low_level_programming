#include "main.h"
int print_last_digit(int r)
{
int res;
if(r >= 0){
res = (r % 10) + 48;
_putchar(res);
return(res);
}
r = r*-1;
res = (r % 10);
_putchar(res + 48);
return (res);
}
