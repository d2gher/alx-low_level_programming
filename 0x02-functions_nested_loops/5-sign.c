#include "main.h"

/**
 * print_sign - print number sign
 **@c: number being tested
 * Return: Always 1 or 0.
 */

int print_sign(int c)
{
 if (c > 0)
 {
		_putchar('+');
		return (1);
 }
 else if (c == 0)
 {
		_putchar('0');
		return (0);
 }
 else
 {
		_putchar('-');
		return (-1);
 }
}
