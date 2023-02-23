#include "main.h"
#include <stdio.h>

/**
 * main - FizzBuzz
 * Return: Void.
 */
int main(void)
{
 int i;
 for (i = 1; i <= 100; i++)
 {
		if ((i % 3 == 0))
		{
			printf("%d", i);
		}
		else
		{
			if (i % 3 == 0)
				// printf("Fizz");
				if (i % 5 == 0)
			// printf("Buzz");
		}
		// printf(" ");
 }
 printf("\n");
 return (0);
}
