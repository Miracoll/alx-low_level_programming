#include "main.h"

/**
 * times_table -prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, prod, tens, unit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			tens = prod / 10;
			unit = prod % 10;

			if (column == 0)
				_putchar('0');
			else if (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(unit + 48);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + 48);
				_putchar(unit + 48);
			}
		}
		_putchar('\n');
	}
}
