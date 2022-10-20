#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 (if capital letter) otherwise 0
 */

int _isupper(int c)
{
	int upper;

	if (c >= 'A' && c <= 'Z')
		upper = 1;
	else
		upper = 0;

	return (upper);
}
