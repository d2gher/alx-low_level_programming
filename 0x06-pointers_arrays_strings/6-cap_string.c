/**
 * cap_string - Capitalize the first letter of words
 * @s: The string
 * Return: The capitaized string
 */
char *cap_string(char *)
{
int i, to_up;
to_up = 'a' - 'A';

for (i = 0; s[i] != '\0' ; i++)
{
	if (i == 0 || s[i - 1] == ' ')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - to_up;
	}
	
}
return (s);
}
