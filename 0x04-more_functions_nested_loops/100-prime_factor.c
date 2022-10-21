#include <stdio.h>

/**
 * main - prints the largest factor of the number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	int long number = 612852475143;
	int large = 0;
	int counter;

	while (number > 1)
	{
		for (counter = 2; counter <= number; counter++)
		{
			if (number % counter == 0)
			{
				if (counter > large)
					large = counter;
				number /= counter;
				break;
			}
		}
	}
	printf("%d%", large);

	return (0);
}
