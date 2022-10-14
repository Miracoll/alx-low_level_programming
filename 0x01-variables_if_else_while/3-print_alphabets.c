#include<stdio.h>

/**
 * main - display alphabet in lowercase and the in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lower;
	int upper;

	for (lower = 97; lower <= 122; lower++)
		putchar(lower);
	for (upper = 65; upper <= 90; upper++)
		putchar(upper);
	putchar('\n');

	return (0);
}
