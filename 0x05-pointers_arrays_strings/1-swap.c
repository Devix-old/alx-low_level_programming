/**
 * swap_int - swaps the values of two integers using pointers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Returns: void
 */
void swap_int(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}
