#include "main.h"

/**
 * puts2 - output chars of string(alternating)
 * @str: string value
 * Return: void
 */

void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
