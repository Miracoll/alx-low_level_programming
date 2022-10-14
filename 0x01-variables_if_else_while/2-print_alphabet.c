#include<stdio.h>

/**
 * main - print alphabet in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int start;

	for (start = 97; start <= 122; start++)
		putchar(start);
	putchar('\n');

	return (0);
}
