#include<stdio.h>

/**
 * main - display all single digit number of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;

	for (count = 0; count <= 9; count++)
		printf("%d", count);
	printf("\n");
	return (0);
}
