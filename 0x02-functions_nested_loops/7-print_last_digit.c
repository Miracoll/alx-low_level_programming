#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: n is an integer
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = (-1 * last_digit);
	_putchar(last_digit + 48);
	return (last_digit);
}

