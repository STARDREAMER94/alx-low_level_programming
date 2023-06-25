#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * Return: 1 (for numbers > 0), 0 (for 0), -1 (for numbers < 0)
 * prints:
 *  + if n is greater than zero
 *  0 if n is zero
 *  - if n is less than zero
 *  @n: parameter contain value to be observed
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
	}

	return (0);

}
