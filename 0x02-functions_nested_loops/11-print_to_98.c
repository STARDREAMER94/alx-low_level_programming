#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: inputted number. The first printed number should be the number
 *    passed to your function
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * You are allowed to use the standard library
 * The last printed number should be 98
 * Return: Always 0 (success). printed list of numbers to 98
 */

void print_to_98(int n)
{
	int i, j;

	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j == 98)
				printf("%d", j);
			else
				printf("%d, ", j);
		}
		printf("\n");
	}
}

