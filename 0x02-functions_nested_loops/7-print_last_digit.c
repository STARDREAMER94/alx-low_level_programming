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

	n = i % 10;

	if (n < 0)
	{
		n = n * -1;
	}

	_putchar(n + '0');

	return (n);
}
