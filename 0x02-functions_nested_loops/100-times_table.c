#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, prod;
	
	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j<= n; j++)
			{
				prod = i * j;
				tens = prod / 10;
				unit = prod % 10;

				if (j == 0)
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
					_putchar(unit + 48);
					_putchar(unit + 48);
				}
			}
			_putchar('\n');
		}
	}
}
