#include "main.h"

/**
 * _pow_recursion - a function that returns the value of:
 *                    x raised to the power of y
 * If y is lower than 0, the function should return -1
 * FYI: The standard library provides a different function: pow
 * @x: inputted value to be multiplied
 * @y: inputted value that determines how many times x is multiplied
 * Return: integer value of x to the power of y
 */

int _pow_recursion(int x, int y)
{
	int n;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}

	n = x * _pow_recursion(x, y - 1);

	return (n);
}
