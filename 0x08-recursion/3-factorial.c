#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * If n is lower than 0, the function should return -1 to indicate an error
 * Factorial of 0 is 1
 * @n: inputted integer number
 * Return: factorial of n
 */

int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}

	i = n * factorial(n - 1);

	return (i);
}
