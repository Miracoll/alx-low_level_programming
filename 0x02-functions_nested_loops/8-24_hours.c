#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i, j, m, n;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (n = 0; n <= 9; n++)
				{
					_putchar(i + 48);
					_putchar(j + 48);
					_putchar(58);
					_putchar(m + 48);
					_putchar(n + 48);
					_putchar('\n');
					if (i == 2 && j == 3 && m == 5 && n == 9)
						break;
				}
				if (i == 2 && j == 3 && m == 5 && n == 9)
					break;
			}
			if (i == 2 && j == 3 && m == 5 && n == 9)
				break;
		}
		if (i == 2 && j == 3 && m == 5 && n == 9)
			break;
	}
}
