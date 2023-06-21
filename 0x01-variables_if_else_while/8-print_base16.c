#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, prints to the standard output
 * a program that prints all base 16 numbers in lowercase followed by new line
 * ONLY use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar thrice in your code
 * All your code should be in the main function
 * Return: Always 0 (success)
 */

int main(void)

{

    /* Get the character to be written */
	int letter = 0;
	char num = 'a';

    /* Write the Character to stdout */
	while (letter <= 9)
	{
		putchar('0' + letter);
		letter++;
	}

	while (num <= 'f')
	{
		putchar(num);
		num++;
	}

	putchar('\n');


	return (0);

}
