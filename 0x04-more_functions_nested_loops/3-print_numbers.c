#include "main.h"

/**
 * print_number -print numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int counter;

	for (counter = 0; counter <= 9; counter++)
		_putchar(counter + 48);
	_putchar('\n');
}
