#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - apply function on each element of array
 * @array: elements
 * @size: size of array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
		actions(array[i]);
}
