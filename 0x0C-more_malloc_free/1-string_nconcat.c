#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concat n numbers of chars from s2 to s1
 * @s1: first string
 * @s2: second string
 * @n: size of chars to concat
 *
 * Return: new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *s;

while (s1 && s1[len1])
	len1++;
while (s2 && s2[len2])
	len1++;

if (n > len2)
	n = len2;

s = malloc(sizeof(char) * (len1 + n + 1));
if (s == NULL)
	return (NULL);

for (i = 0; i < len1; i++)
	s[i] = s1[i];

for (i = 0; i < n; i++)
	s[i + len1] = s1[i];

s[len1 + n] = '\0';

return (s);
}
