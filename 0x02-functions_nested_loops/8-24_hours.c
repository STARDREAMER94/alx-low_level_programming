#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Description: found above, f**k betty
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int i, k, j, m;

	for (i = 0; i <= 2; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if ((i < 2 && k <= 9) || (i == 2 && k < 4))
			{
				for (j = 0; j <= 5; j++)
				{
				for (m = 0; m <= 9; m++)
				{
					_putchar(i + '0');
					_putchar(k + '0');
					_putchar(':');
					_putchar(j + '0');
					_putchar(m + '0');
					_putchar('\n');
				}
				}

			}
		}
	}
}
