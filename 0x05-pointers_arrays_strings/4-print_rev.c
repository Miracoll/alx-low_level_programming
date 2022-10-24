#include "main.h"

/**
 * prinnt_rev - reverse string
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[i] != '\0')
		count++;
	count--;
	while (count >= 0)
	{
		_putchar(s[i]);
		count++;
	}
	_putchar('\n');
}
