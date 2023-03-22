#include "function_pointers.h"

/**
 * int_index - find a value in array
 * @array: array to iterate over
 * @size: size of the array
 * @cmp: function to compare with
 * 
 * Return: index of int if found, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !size || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
