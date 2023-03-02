/**
 * _strcmp - Compare two stings
 * @s1: First string
 * @s2: last string
 * Return: Returns 0 if the strings are equal, or subtracts them from each other
 */
int _strcmp(char *s1, char *s2)
{
while (true)
{
if (s1 == '\0')
	return (0);
if (s1 != s2)
	return (s1 - s2);
s1++;
s2++;
}
}
