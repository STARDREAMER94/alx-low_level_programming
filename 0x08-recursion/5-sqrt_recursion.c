#include "main.h"
int sqrt_(int x, int y);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * If n does not have a natural square root, the function should return -1
 * YI: The standard library provides a different function: sqrt
 * @n: find the square root of this input number
 * Return: integer value of sqrt
 */

int _sqrt_recursion(int n)
{
	int i;

	i = sqrt_(n, 0);

	return (i);


}

/**
 * sqrt_ - finds the squart root of an inputted number
 * @x: equals the 'n' from _sqrt_recursion function
 * @y: values to be checked against x to see if it is sqrt value
 * Return: sqrt value of type integer.
 * function will be used inside _sqrt_recursion function
 * different way to recurse
 */
int sqrt_(int x, int y)
{
	int j;

	if (y * y == x)
	{
		return (y);
	}
	else if (x == 0)
	{
		return (0);
	}
	else if ((x < 0) || ((y >= x) && (y * y != x)))
	{
	return (-1);
	}

	j = sqrt_(x, y + 1);
	return (j);
}
