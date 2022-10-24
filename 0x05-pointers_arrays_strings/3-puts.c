#include "main.h"

/**
 * _puts - output string
 * @str: value to output
 * Return: void
 */

void _put(char *str)
{
	int counter = 0;
	char value;

	while (str[counter] != '\0')
	{
		value = str[counter];
		_putchar(value);
		counter++;
	}
	_putchar('\n');
}
