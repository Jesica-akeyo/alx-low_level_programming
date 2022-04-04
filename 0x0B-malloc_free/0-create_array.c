#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char to assign
 * Return: pointer to array, NULL if fail and size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(char));

	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}

