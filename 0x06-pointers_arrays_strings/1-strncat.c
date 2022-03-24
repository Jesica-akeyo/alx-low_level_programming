#include "main.h"

/**
 * _strncat - concatenates two string
 * @dest: string destination
 * @src: string source
 * @n: number of bytes from src
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}

