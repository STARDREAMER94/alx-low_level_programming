#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 * void - returns nothing
 * Return: Always 0 (success)
 *
 */

void times_table(void)
{
	int k, multi;
	int i = 0;

	while (i < 10)
	{
		k = 0;
		while (k < 10)
		{
			multi = k * i;

			if (k != 9)
			{
				_putchar(multi + '0');
				_putchar(',');
				_putchar(' ');
			}

			_putchar(multi + '0');
			k++;
		}
		i++;
		_putchar('\n');
	}

}
