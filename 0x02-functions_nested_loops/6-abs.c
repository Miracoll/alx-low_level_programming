#include "main.h"

/**
 * _abs - computes the absolute value of an integer value
 *
 * @n: n is an interger value
 *
 * Return: interger
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
