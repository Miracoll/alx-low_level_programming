#include "main.h"

/**
 * largest_number - return the lagest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && b > c)
		largest = a;
	else if (b >= a && a > c)
		largest = b;
	else if (c >= b && b > a)
		largest = c;
	else if (a >= b && c > b)
		largest = a;
	else if (b >= a && c > a)
		largest = b;
	else if (c >= b && a > b)
		largest = c;
	else
		largest = a;

	return (largest);
}
