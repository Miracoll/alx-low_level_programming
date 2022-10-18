#include "main.h"

/**
 * _isalpha - checks for alphabet
 *
 * @c: c is a char value
 *
 * Return: 1 if it's letter
 */

int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
