#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Print _ n number of times diagonally
 *@n: number of _ to print
 * Return: Void.
 */
void print_diagonal(int n)
{
 int l, s;

 for (l = 0; l < n; l++)
 {
		for (s = 0; s < l; s++)
			_putchar(' ');
		_putchar('/');
		_putchar('\n');
 }
}
