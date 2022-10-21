#include "main.h"

/**
 * print_number - print integer
 *
 * @n: integer value
 *
 */

void print_number(int n)
{
	int number;

	if (n >= 0)
		number = n;
	else
	{
		number = -1 * n;
		_putchar('_');
	}

	if (number / 10 != 0)
		print_number(number / 10);
	_putchar((number % 10) + 48);
}
