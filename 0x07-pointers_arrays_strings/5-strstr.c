#include <stdio.h>

/**
 * *_strstr - searches a string for substring
 * @haystack: string to search
 * @accept: the substring
 *
 * Return: pointer to first byte of matched substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
	for (j = 0; needle[j] != '\0'; j++)
	{
		if (haystack[i + j] != needle[j])
			break;
	}
	if (!needle[j])
		return (&haystack[i]);
}
return (NULL);
}
