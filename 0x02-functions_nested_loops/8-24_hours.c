#include "main.h"

/**
 * print_last_digit - print last digit of a number
 **@i: number being tested
 * Return: a number.
 */

void jack_bauer(void)
{
 int h, m;
 for (h = 0; h < 25; h++)
 {
		for (m = 0; m < 61; m++)
		{
			if (h < 10)
				_putchar('0');
			_putchar(h + '0');
			_putchar(':');
			if (m < 10)
				_putchar('0');
			_putchar(m + '0');
			_putchar('/n')
		}
 }
}
