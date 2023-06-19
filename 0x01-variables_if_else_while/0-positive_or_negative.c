#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - entry point
 * for every execution: a random value is assigned to variable n
 * prnt to see if variable n is positive or negative
 * variable n will store a different value every time program is ran
 * don’t have to understand what rand, srand, RAND_MAX do.
 * The output of the program should be:
  *The number, followed by
  *if the number is greater than 0: is positive
  *if the number is 0: is zero
  *if the number is less than 0: is negative
  *followed by a new line
 * return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}


	return (0);
}
