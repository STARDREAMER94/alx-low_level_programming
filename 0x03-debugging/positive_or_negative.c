#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * positive_or_negative - function from project 00x01 repurposed
 * @i: inputed value
 * for every execution: a random value is assigned to variable n
 * print to see if variable n is positive or negative
 * variable n will store a different value every time program is ran
 * don’t have to understand what rand, srand, RAND_MAX do.
 * The output of the program should be:
  *The number, followed by
  *if the number is greater than 0: is positive
  *if the number is 0: is zero
  *if the number is less than 0: is negative
  *followed by a new line
 * Return: Always 0 (success)
 */

void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
}
