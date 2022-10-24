#include "main.h"

/**
 * puts_half - output half of the string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int j, max;

	while (str[i] != '\0')
		i++;
	max = i;
	j = max / 2;
	while (j <= max)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
