#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an n number of elements of arrays
 * @a: The array
 * @n: Number of elemets to print
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
 int l = 0;
 char *p = src;
 while (*(p + l) != '\0')
		l++;

 int i;
 for (i = 0; i < l; i++)
		*(dest + i) = *(src + i);
}
