#include "main.h"

/**
 * _isalpha - function that checks for lowercase/uppercase alphabetic character
 * @c: - variable entered to be checked, type integer/char
 * Return: 1 if c is lowercase/uppercase, 0 otherwise
 * FYI: The standard library provides a similar function: isalpha
 * Run man isalpha to learn more.
 * if (((c >= 97) && (c <=122)) || ((c >= 65) && (c <= 90)))
 * {
 * return(1);
 * }
 * return (0);
 * }
*/

int _isalpha(int c)
{
	char n = 'a';
	char m = 'A';

	while ((m <= 'Z') && (n <= 'z'))
	{
		if ((c == n) || (c == m))
		{
			return (1);
		}
		else
		{
			n++;
			m++;
		}
	}

	return (0);
}
