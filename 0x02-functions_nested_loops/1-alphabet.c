#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int start;

	for (start = 97; start <= 122; start++)
		_putchar(start);
	_putchar('\n');
}
