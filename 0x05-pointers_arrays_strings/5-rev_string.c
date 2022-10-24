#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int count, high, mid;
	char first, end;

	count = 0;
	while (s[count] != '\0')
		count++;
	high = count - 1;\
	       mid = high / 2;
	while (mid >= 0)
	{
		first = s[high - mid];
		end = s[mid];
		s[mid] = first;
		s[high - mid] = last;
		mid--;
	}
}
