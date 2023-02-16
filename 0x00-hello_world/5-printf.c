#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;
	float floatType;
	char charType;
	long longType;
	long long long2int;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of a int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long2int));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
