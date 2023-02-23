#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Print / n number of times diagonally
 *@n: number of / to print
 * Return: Void.
 */
void print_diagonal(int n)
{
int l, s;

for (l = 0; l < n; l++)
{
	for (s = 0; s - 1 < l; s++)
		_putchar(' ');
	_putchar('/');
	_putchar('\n');
}
if (n == 0)
	_putchar('\n');
}
