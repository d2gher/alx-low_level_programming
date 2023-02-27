#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: A string
 * Return: nothing
 */
void puts_half(char *str)
{
 int i;
 int l = 0;
 while (str[l] != '\0')
		l++;

 if (l == 0)
 {
		_putchar('\n');
		return;
 }

 if (l % 2 == 0)
		i = l / 2;
 else
		i = (l - 1) / 2;

 for (i = l / 2; i < l; i++)
		_putchar(str[i]);
 _putchar('\n');
}
