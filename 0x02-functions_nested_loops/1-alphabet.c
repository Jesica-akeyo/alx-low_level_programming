#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * description - print alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a'

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
