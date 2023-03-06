#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: square matrix 
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
int sum1, sum2, i;
sum1 = 0;
sum2 = 0;

for (i = 0; i < size; i++) {
	sum1 += a[(size * i) + i];
	sum1 += a[(size * (i + 1)) - (i + 1)];
}
printf("%d, %d\n", sum, sum1);
}
