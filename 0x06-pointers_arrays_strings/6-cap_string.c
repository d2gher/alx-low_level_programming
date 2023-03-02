/**
 * cap_string - Capitalize the first letter of words
 * @s: The string
 * Return: The capitaized string
 */
char *cap_string(char *s)
{
int i, j, to_up;
to_up = 'a' - 'A';
char Separators[13] = {' ', '\t', '\n', ',', ';', '.',
	'!', '?', '"', '(', ')', '{', '}'};

for (i = 0; s[i] != '\0' ; i++)
{
	if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - to_up;

	for (j = 0; j < 13; j++)
	{
		if (Separators[j] == s[i])
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - to_up;
		}
	}
}
return (s);
}
