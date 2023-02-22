#include "main.h"

/**
 * _abs - print absolute
 **@i: number being tested
 * Return: Always 1 or 0.
 */

int _abs(int i)
{
if (i < 0)
	return (i - i - i);
return (i);
}
