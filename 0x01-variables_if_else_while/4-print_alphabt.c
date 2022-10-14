#include<stdio.h>

/**
 * main - display all letters execpts q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lower;

	for (lower = 97; lower <= 122; lower++)
	{
		if (lower == 113 || lower == 101)
			continue;
		putchar(lower);
	}
	putchar('\n');

	return (0);
}
