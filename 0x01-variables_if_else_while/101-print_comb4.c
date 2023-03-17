#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there*/
/**
 * main - prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
int y;
int j;
for (i = 0; i < 10; i++)
{
	for (y = 0 ; y < 10; y++)
	{
		for (j = 0; j < 10 ; j++)
		{
			if	(i != y && i < y && y != j && y < j)
			{
				putchar(i + 48);
				putchar(y + 48);
				putchar(j + 48);
				if (i != 7)
				{
				putchar (',');
				putchar (' ');

}
}

}
}
}
putchar('\n');
return (0);

}
