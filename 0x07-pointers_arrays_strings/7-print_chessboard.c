#include <stdio.h>
/*
 * print_chessboard - represented as a 2D array of characters
 * @a: pointer to the 2D array
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
putchar(a[i][j]);
}
if (i != 8)
{
putchar('\n');
}
}
}
