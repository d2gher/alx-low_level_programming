/**
 * print_rev - Prints a string in reverse
 * @str: A string
 * Return: nothing
 */
void puts2(char *str)
{
 int i;
 int l = 0;
 while (str[l] != '\0')
		l++;

 for (i = 0; i < l; i += 2)
		_putchar(str[i]);
 _putchar('\n');
}
