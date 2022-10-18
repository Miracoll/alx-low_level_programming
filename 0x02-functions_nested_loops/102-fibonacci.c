#include<stdio.h>

/**
 * main - print first 50 fibonnaci number
 *
 * Return: Always 0.
 */

int main(void)
{
	long int prev = 1;
	long int next = 2;
	int counter = 3;
	long int keep;

	printf("%ld, ", prev);
	printf("%ld, ", next);

	while (counter <= 50)
	{
		keep = prev;
		prev = next;
		next += keep;
		if (counter == 50)
		{
			printf("%ld", next);
			break;
		}
		printf("%ld, ", next);
		counter++;
	}
	putchar('\n');
	return (0);
}
