/**
 * *_memcpy - copys memory data
 * @dest: destination
 * @stc: src
 * @n: number of times to copy dest
 *
 * Return: pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}

return (dest);
}
