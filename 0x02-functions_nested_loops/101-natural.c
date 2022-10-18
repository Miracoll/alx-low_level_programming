#include<stdio.h>

/**
 * main - sum all the multiples of 3 or 5
 *
 * Return: Always 0
 */

int main(void)
{
	int counter = 0;
	int total = 0;

	while (counter < 1024)
	{
		if ((counter % 3) == 0 || (counter % 5) == 0)
		{
			total += counter;
		}
		counter++;
	}
	printf("%d", total);
	return (0);
}
