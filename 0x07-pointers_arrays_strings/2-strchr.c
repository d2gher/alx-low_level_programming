/**
 * _strchr - Find char in a string
 * @s: String
 * @c: Char to find
 * Return: Pointer to char if found, or null
 */
char *_strchr(char *s, char c)
{
while(1) 
{
if (*s == c)
	return (s);
if (*s == 0)
	return (NULL);
s++;
}
}
