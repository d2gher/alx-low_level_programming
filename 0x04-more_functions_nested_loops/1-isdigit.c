#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Check if c is a digit
 * @c: Int representing a character
 * Return: Always 0.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
return (0);
}
