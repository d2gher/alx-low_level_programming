/**
 * _strlen - Get length of a string
 * @s: A string
 * Return: Length of a string
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
	i++;

return (i);
}
