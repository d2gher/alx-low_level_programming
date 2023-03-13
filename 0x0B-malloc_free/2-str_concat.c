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
int len1, len2, size, m, i;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

len1 = 0;
len2 = 0;
while (s1[len1])
	len1++;
while (s2[len2])
	len2++;

size = len1 + len2; 

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
