#include "main.h"

/**
 * _puts - output string
 * @str: value to output
 * Return: void
 */

void _puts(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}
