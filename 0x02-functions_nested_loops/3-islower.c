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
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
