#include<stdio.h>

/**
 * main - print the sum of all even fibonacci number before 4000000
 *
 * Return: Always 0.
 */

int main(void)
{
	long int total = 0;
	long int sum = 0;
	long first = 0;
	long second = 1;

	while (sum < 4000000)
	{
		sum = first + second;
		if (sum % 2 == 0)
			total += sum;
		first = second;
		second = sum;
	}
	printf("%li\n", total);
	return (0);
}
