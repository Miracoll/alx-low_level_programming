# include<stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers to 98
 *
 * @n: value to begin with
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
		putchar('\n');
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
		putchar('\n');
	}
	else
	{
		printf("98\n");
	}
}
