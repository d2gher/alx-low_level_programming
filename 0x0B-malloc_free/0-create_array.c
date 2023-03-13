#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - create and array
 * @size: size of array
 * @c: content of array
 *
 * Return: Pointer to array
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
	return (NULL);

arr = (char *) malloc(sizeof(char) * size);

if (arr == NULL)
	return (0);

for (i = 0; i <= size; i++)
	arr[i] = c;

arr[i] = '\0';

return (arr);
}
