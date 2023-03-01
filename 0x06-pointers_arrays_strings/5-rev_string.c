/**
 * rev_string - Reverse a string
 * @s: A string
 * Return: nothing
 */
void rev_string(char *s)
{
int i, j, temp;
int l = 0;
while (s[l] != '\0')
	l++;

j = l - 1;
i = 0;
while (i < j)
{
	temp = s[j];
	s[j] = s[i];
	s[i] = temp;
	i++;
	j--;
}
}
