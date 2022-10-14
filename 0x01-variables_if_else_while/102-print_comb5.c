#include<stdio.h>

/**
 * main -display all possible combinations of tw0 two-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int row = 48;
	int column = 49;

	for (row = 48; row <= 57; row++)
	{
		for (column = 48; column <= 57; column++)
		{
			if (row == '0' && column == '0')
				continue;
			putchar(row);
			putchar(column);
			if (row == '9' && column == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
