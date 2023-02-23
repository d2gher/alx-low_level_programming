#include "main.h"
#include <stdio.h>

/**
 * print_line - Print _ n number of times
 *@n: number of _ to print
 * Return: Void.
 */
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
	_putchar('_');
_putchar('\n');
}
