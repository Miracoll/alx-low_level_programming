#include "main.h"

/**
 * print_triangle - print triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int length, space, hash;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (length = 0; length < size; length++)
		{
			for (space = size - 1; space > length; space--)
				_putchar(' ');
			for (hash = 0; hash < length - 1; hash++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
