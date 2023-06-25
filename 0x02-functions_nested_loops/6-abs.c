#include "main.h"

/**
 * _abs -  a function that computes the absolute value of an integer
 * @c: variable to be observed
 * description: mxm
 * Return: c - integerf
 * FYI: The standard library provides a similar function: abs
 * Run man abs to learn more
 */

int _abs(int c)
{
	int n = 0;

	if (c < 0)
	{
		while  (c < 0)
		{
			n++;
			c++;
		}
		c = n;
	}

	return (c);
}
