#include<stdio.h>
/**
 * main - display all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int number;
	int alpha;

	for (number = 48; number <= 57; number++)
		putchar(number);
	for (alpha = 97; alpha <= 102; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}
