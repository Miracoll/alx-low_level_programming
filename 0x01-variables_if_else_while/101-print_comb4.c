#include<stdio.h>
/**
 * main - display all possible combinations of three digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int row = 48;
	int irow = row;
	int column = 49;
	int third = 50;

	for (row = irow; row <= 55; row++)
	{
		for (column = row + 1; column  <= 56; column++)
		{
			for (third = column + 1; third <= 57; third++)
			{
				putchar(row);
				putchar(column);
				putchar(third);
				if (row == '7' && column == '8' && third == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
