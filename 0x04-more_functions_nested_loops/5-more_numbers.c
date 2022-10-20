#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int x, y, mod;
	int check = 0;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			mod = y % 10;
			if ((y / 10) > 0)
				_putchar(49);
			_putchar(mod + 48);
		}
		_putchar('\n');
	}
}
