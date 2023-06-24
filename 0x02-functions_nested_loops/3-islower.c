#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: variable entered to be checked, type integer/char
 * Return: 1 if c is lowercase, 0 otherwise
 * FYI: The standard library provides a similar function: islower
 * Run man islower to learn more.
 * if ((c >= 97) && (c <=122)
 * {
 * return(1);
 * }
 * return (0);
 * }
*/

int _islower(int c)
{
	char n = 'a';

	while ((n >= 'a') && (n <= 'z'))
	{
		if (c == n)
		{
			return (1);
		}
		else
		{
			n++;
		}
	}

	return (0);
}
