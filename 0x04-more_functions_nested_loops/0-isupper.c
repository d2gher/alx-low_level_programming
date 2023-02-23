#include <stdio.h>

/**
 * main - checks if uppercase
 * @c: character to check
 * Return: 1 or 2
 */

int _isupper(int c)
{
 if (c >= 65 && c <= 90)
		return (1);
 return (0);
}