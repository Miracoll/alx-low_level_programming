#include "main.h"

/**
 * print_diagonal - draw diagonal line
 *
 * @n: length of line to draw
 *
 * Return: void
 */

void print_diagonal(int n)
{

	int counter, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (counter = 0; counter < n; counter++)
		{
			for (space = 0; space < n; space++)
			{
				if (space == counter)
					_putchar('\\');
				else if (counter > space)
					_putchar(' ')
			}
			_putchar('\n');
		}
	}
}
