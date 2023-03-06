#include <stdio.h>
/**
 * _strchr - Find char in a string
 * @s: String
 * @c: Char to find
 * Return: Pointer to char if found, or null
 */
char *_strchr(char *s, char c)
{
unsigned int i;

while(s[i] != 0) 
{
if (s[i] == c)
	return (s[i]);
i++;	
}
	
return (NULL);
}
