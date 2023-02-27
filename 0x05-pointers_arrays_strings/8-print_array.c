#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an n number of elements of arrays
 * @a: The array
 * @n: Number of elemets to print
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
	if (i + 1 != n)
		printf(", ");
}
printf("\n");
}
