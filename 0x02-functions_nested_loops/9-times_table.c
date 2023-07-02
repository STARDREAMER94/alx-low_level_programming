#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 * Return: Always 0 (success) void - returns nothing
 */

void times_table(void)
{
	int i, k, j;

	for (k = 0; k <= 9; k++)
	{
		for (j = 0; j <= 9; j++)
		{
			i = k * j;

			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				if (i <= 9 && j != 0)
				{
					_putchar(' ');
				}
				_putchar(i + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
