#include<stdio.h>

/**
 * main - print the first 98 fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int prev = 1;
	unsigned long int next = 2;
	unsigned long int total;
	int counter;

	printf("%lu, ", prev);
	printf("%lu, ", next);

	for (counter = 3; counter <= 98; counter++)
	{
		total = prev + next;
		if (counter != 98)
			printf("%lu, ", total);
		else
			printf("%lu\n", total);
		prev = next;
		next = total;
	}
	return (0);
}
