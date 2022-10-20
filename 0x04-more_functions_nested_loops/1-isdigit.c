#include "main"

/**
 * _isdigit - checks for digithood
 * @c: character to checked for numeric value
 * Return 1 if numeric otherwise 0
 */

int _isdigit(int c)
{
	int number;

	if (c >= '0' && c <= '9')
		number = 1;
	else
		number = 0;
}
