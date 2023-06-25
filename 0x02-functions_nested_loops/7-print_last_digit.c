#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @i: integer observed
 * Returns the value of the last digit
 * Return: Always 0 (success) in this case, integer variable n
 */

int print_last_digit(int i)
{
	int n;

	if (i < 0)
	{
		i = i * -1;
	}

	n = i % 10;
	_putchar('0' + n);

	return (n);
}
