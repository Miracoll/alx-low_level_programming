#include "main.h"
#include<stdio.h>

/**
 * _islower - checks for lowercase
 *
 * @c: c is a char value
 *
 * Return: 1 if lowercase value
 */

int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	else
		return (0);
}
