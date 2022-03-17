#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 - 14
 * followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m > 9)
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}

