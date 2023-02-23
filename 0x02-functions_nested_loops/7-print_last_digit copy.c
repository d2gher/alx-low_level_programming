#include "main.h"

/**
 * print_last_digit - print last digit of a number
 **@i: number being tested
 * Return: a number.
 */

int print_last_digit(int i)
{
 int a;
 if (i < 0)
		i = -i;

 a = i % 10;

 if (a < 0)
		a = -a;
 _putchar(a);
 return (a);
}