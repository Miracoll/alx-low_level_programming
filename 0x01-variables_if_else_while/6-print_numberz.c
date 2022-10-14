#include<stdio.h>
/**
 * main - display single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;

	for (count = 48; count <= 57; count++)
		putchar(count);
	putchar('\n');

	return (0);
}
