#include "main.h"

int isPrime(int x, int y);

/**
 * is_prime_number - a function that returns 1 if the input integer is a
 *   a prime number, otherwise return 0 for non-prime numbers
 * @n: number to be observed
 * Return: integer data type. (0 or 1)
 */

int is_prime_number(int n)
{
	return (isPrime(n, 2));
}

/**
 * isPrime - checks for prime number or not to return to is_prime_number
 * does all the calculations and heavy lifting
 * @x: same as variable n in is_prime_number function
 * @y: checks if n variable can be multiplied by this number
 * Return: returns 0 or 1 to the is_prime_number function
 */

int isPrime(int x, int y)
{
	int z;

	if (x <= 1)
	{
		return (0);
	}
	else if (x == 2 || x == 3 || x == 5)
	{
		return (1);
	}
	else if (x % 5 == 0 || x % 3 == 0 || x % 2 == 0)
	{
		return (0);
	}
	else if ((y > 1 || y < x) && (x % y == 0))
	{
		return (0);
	}
	else if (x == y)
	{
		return (1);
	}

	z = isPrime(x, y + 1);
	z = 1;

	return (z);
}
