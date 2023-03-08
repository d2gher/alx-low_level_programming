#include <stdio.h>
/**
 * _strchr - Find char in a string
 * @s: String
 * @c: Char to find
 * Return: Pointer to char if found, or null
 */
char *_strchr(char *s, char c)
{
int a;

while (1)
{
a = *s++;
if (a == c)
{
	return (s - 1);
}
if (a == 0)
{
	return (NULL);
}
}
}
