#include "mmain.h"

/**
 * print_most_numbers - print number 0 to 9 skipping 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int counter;

	for (counter = 0; counter <= 9; counter++)
	{
		if (counter == 2 || counter == 4)
			continue;
		_putchar(counter + 48);
	}
	_putchar('\n');
}
