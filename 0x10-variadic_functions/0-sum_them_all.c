#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: constant/ variadic input
 * Return: integer type
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int k;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (k = 0; k < n; k++)
	{
		sum = sum + va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
