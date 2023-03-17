#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copy a string
 * @str: string to copy
 *
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
char *newstr;
int size, i;

if (str == NULL)
	return (NULL);

size = 0;
while (str[size])
	size++;

newstr = malloc(sizeof(char) * (size + 1));

if (newstr == NULL)
	return (NULL);

for (i = 0; i < size; i++)
	newstr[i] = str[i];

return (newstr);
}
