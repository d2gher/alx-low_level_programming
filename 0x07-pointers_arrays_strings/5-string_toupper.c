/**
 * string_toupper - Change letters to upcase
 * @s: The string
 * Return: The upcase string
 */
char *string_toupper(char *s)
{
int i, to_up;
to_up = 'a' - 'A';

for (i = 0; s[i] != '\0' ; i++)
{
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - to_up;
}
return (s);
}
