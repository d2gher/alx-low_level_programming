/**
 * _strchr - Find char in a string
 * @s: String
 * @c: Char to find
 * Return: Pointer to char if found, or null
 */
char *_strchr(char *s, char c)
{
unsigned int i;

i = 0;
while(s[i] != "\0")
	if (s[i] == c)
		return (&s[i]);
return (NULL);
}
