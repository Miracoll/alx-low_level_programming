#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: character to checked for numeric value
 * Return: 1 if numeric otherwise 0
 */

int _isdigit(int c)
{
	int number;

	if (c >= '0' && c <= '9')
		number = 1;
	else
		number = 0;
	return (number);
}
