#include "main.h"

/**
 * print_line - draw straight line in terminal
 * @n: number of line to print
 * Return: void
 */
void print_line(int n)
{
	int counter;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (counter = 0; counter < n; counter++)
			_putchar('_');
		_putchar('\n');
	}
}
