/**
 * swap_int - Swap values of two ints
 * @a: Pointer to an int
 * @b: Pointer to an int
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
int t;

t = *a;
*a = *b;
*b = t;
}
