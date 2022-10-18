#include<main.h>

/**
 * main - display _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char name[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(name[i]);
	_putchar('\n');
	return (0);
}
