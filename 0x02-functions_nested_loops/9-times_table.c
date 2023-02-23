#include "main.h"

/**
 * times_table - print the times table
 * Return: a number.
 */

void times_table(void)
{
 int f, l, n;
 for (f = 0; f < 10; f++)
 {
		for (l = 0; l < 10; l++)
		{
			n = f * l;

			if ((n / 10) > 0)
				_putchar((n / 10) + '0');

			_putchar((n % 10) + '0');

			if (l < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
 }
}
