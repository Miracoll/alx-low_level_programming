#include<stdio.h>
/**
 * main - display lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lower;

	for (lower = 122; lower >= 97; lower--)
		putchar(lower);
	putchar('\n');
	return (0);
}
