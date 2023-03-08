#include "main.h"
/**
 * *_puts_recursion - puts a string, recursively
 * @s: string to print
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
if (*s == '\0') 
{
	_putchar('\n');
	return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
