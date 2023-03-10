#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Adds two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
	printf("Error");
	return(1);
}
