#include<stdio.h>

/**
 * main - display all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		if (number == '9')
			break;
		putchar(',');
		putchar(' ');
		number++;
	}
	putchar('\n');

	return (0);
}
