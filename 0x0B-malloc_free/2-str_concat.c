#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concat two strings
 * @s: strings to concat
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
char *newstr;
int size, m, i;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

size = 0;
while (s1[size])
	size++;
while (s2[size])
	size++;

newstr = malloc(sizeof(char) * (size + 1));

if (newstr == NULL)
	return (NULL);

m = 0;
for (i = 0; s1[i] != '\0'; i++)
{
	newstr[m] = s1[i];
	m++; 
}
for (i = 0; s2[i] != '\0'; i++)
{
	newstr[m] = s2[i];
	m++; 
}

newstr[m + 1] = '\0';
return (newstr);
}
