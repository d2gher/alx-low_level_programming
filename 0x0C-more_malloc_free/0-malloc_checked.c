#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocate memory
 * @b: size of memory to allocate
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *m;

m = malloc(b);
if (m == NULL)
	exit(98);

return (m);
}
