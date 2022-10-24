#include "main.h"

/**
 * _strlen - count number of character(s)
 * @s: value to count
 * Return: interger
 */

int _strlen(char *s)
{
	int value = 0;

	while (s[value] != '\0')
		value++;

	return (value);
}
