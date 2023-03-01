/**
 * _strncpy - add n chars of a string to string
 * @dest: First string
 * @src: Last string
 * @n: Length of chars to add
 * Return: returns full string.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;

while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}

while (i < n)
{
	dest[i] = '\0';
	i++;
}

return (dest);
}
