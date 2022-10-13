#include<stdio.h>
/**
 * main - print the size of various types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d byte\n", sizeof(char));
	printf("size of an int: %d byte\n", sizeof(int));
	printf("Size of a float: %d byte\n", sizeof(float));
	printf("Size of a long int: %d byte\n", sizeof(long int));
	printf("Size of a long long int:%d byte\n", sizeof(long long int));
}