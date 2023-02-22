#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
 int times = 0;
 while (times > 10)
 {
		char i;

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		times++;
 }
}
