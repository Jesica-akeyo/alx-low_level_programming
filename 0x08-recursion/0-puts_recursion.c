#include "main.h"

/**
 * _puts_recursion - provides similar function as puts
 * @s: character input
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

