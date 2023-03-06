#include <stdio.h>

/**
 * *print_chessboard - print 2 dimonational array
 * @haystack: string to search in
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
void print_chessboard(char (*a)[8]);
{
int i, j;

for (i = 0; i < 8; i++)
{
	for (j = 0; j < 8; j++)
	{
		_putchar(a[i][j])
	}
	_putchar('\0')
}
}
