#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum up a list of numbers
 * @n: number of ints
 * 
 * Return: the sum of all numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for(i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
