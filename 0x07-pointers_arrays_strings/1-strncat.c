/**
 * _strncat - add n chars of a string to string
 * @dest: First string
 * @src: Last string
 * @n: Length of chars to add
 * Return: returns full string.
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
j = 0;

while (dest[i] != '\0')
	i++;

while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';

return (dest);
}
