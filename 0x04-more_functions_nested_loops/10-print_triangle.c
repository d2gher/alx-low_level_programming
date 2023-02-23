#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Print a triangle
 *@size: Size of triangle
 * Return: Void.
 */
void print_triangle(int size)
{
 int l, s, t;

 for (l = 0; l < size; l++)
 {
		for (s = size - l; s > 1; s--)
			_putchar(' ');
		for (t = 0; t <= l; t++)
			_putchar('#');

		_putchar('\n');
 }
 if (size <= 0)
		_putchar('\n');
}
