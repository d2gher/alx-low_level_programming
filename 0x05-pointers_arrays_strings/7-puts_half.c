#include "main.h"

/**
 * puts_half - Prints second half of a string
 * @str: A string
 * Return: nothing
 */
void puts_half(char *str)
{
int i;
int l = 0;
while (str[l] != '\0')
	l++;

if (l != 0)
{
	i = (l - 1) / 2;
	for (i = i + 1; i < l; i++)
		_putchar(str[i]);
}
_putchar('\n');
}
