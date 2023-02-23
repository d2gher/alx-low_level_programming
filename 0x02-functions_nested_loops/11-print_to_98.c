#include "main.h"

/**
 * print_to_98 - print from n to 98
 **@n: number to print from
 * Return: a number.
 */

void print_to_98(int n)
{
 int i;
 if (n <= 98)
 {
		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
 }
 else
 {
		for (i = n; i >= 98; i--)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
 }
 _putchar('\n');
}