#include"main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate string on a new allocated memory
 * @str: string
 * Return: pointer to the duplicated string
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *p;
	int i;
	int r = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		p[r] = str[r];

	return (p);
}

