#include<stdio.h>

/**
 * main - print the first 98 fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	long int prev = 0;
	long int next = 1;
	long int total;
	int counter;

	for (counter = 1; counter <= 98; counter++)
	{
		total = prev + next;
		if (counter != 98)
			printf("%ld, ", total);
		else
			printf("%ld\n", total);
		prev = next;
		next = total;
	}
	return (0);
}
