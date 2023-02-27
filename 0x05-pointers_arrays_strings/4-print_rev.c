#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: A string
 * Return: nothing
 */
void print_rev(char *s)
{
int i, l;

// get length
int l = 0;
while (s[i] != '\0')
	i++;

// print string in reverse
for (i = l - 1; i >= 0; i--)
	_putchar(s[i]);
_putchar('\n');
}
