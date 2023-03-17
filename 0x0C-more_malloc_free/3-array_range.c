#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - create an array of numbers
 * @min: starting number
 * @max: ending number
 *
 * Return: Pointer to array
 */
int *array_range(int min, int max)
{
int *arr;
int size, i;

if (min > max)
	return (NULL);

size = max - min + 1;

arr = malloc(sizeof(int) * size);

if (arr == NULL)
	return (NULL);

for (i = 0; min <= max; i++)
	arr[i] = min++;
}
