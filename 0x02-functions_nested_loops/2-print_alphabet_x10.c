#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int start;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (start = 97; start <= 122; start++)
			_putchar(start);
		_putchar('\n');
	}
}
