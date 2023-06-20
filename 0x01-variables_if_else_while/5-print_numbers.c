#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, prints to the standard output
 * a program that prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 * All your code should be in the main function
 * Return: Always 0 (success)
 */

int main(void)

{

    /* Get the character to be written */
	char letter = '0';

    /* Write the Character to stdout */
	while (letter <= '9')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');


	return (0);

}
