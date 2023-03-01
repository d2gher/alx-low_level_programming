/**
 * _strcpy - Copy string
 * @dest: The array
 * @src: Number of elemets to print
 * Return: Address for new copy
 */
char *_strcpy(char *dest, char *src)
{
int i;
int l = 0;
char *p = src;
while (*(p + l) != '\0')
	l++;

for (i = 0; i <= l; i++)
	*(dest + i) = *(src + i);
return (dest);
}
