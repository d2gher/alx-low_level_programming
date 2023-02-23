#include "main.h"

/**
 * print_last_digit - print last digit of a number
 **@i: number being tested
 * Return: a number.
 */

void jack_bauer(void)
{
 int h, m;
 for (h = 0; h < 24; h++)
 {
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
 }
}
