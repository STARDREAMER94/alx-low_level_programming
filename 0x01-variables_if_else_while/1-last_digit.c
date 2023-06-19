#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point, prints to standard output
 * random number to the variable n in every execution
 * The output of the program should be:
  *The string Last digit of, followed by n, followed by
  *the string is, followed by
  *if the last digit of n is greater than 5: the string and is greater than 5
  *if the last digit of n is 0: the string and is 0
  *if the last digit of n is less than 6 and not 0:
     * the string and is less than 6 and not 0
  *followed by a new line
 * don’t have to understand what rand, srand, and RAND_MAX do
 * Return: Always 0 (success)
 */
/* betty style doc for function main goes there */

int main(void)

{
	int n;
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_digit);
	}
	else if ((last_digit < 6) && (last_digit != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	}

	return (0);

}
