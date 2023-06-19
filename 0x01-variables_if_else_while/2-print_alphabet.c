#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, prints to the standard output
 * a program that prints the alphabet in lowercase, followed by a new line
 * ONLY use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar twice in your code
 * All your code should be in the main function
 * Return: Always 0 (success)
 */

int main(void)

{

    /* Get the character to be written */
	char letter = 'a';

    /* Write the Character to stdout */
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}


	return (0);

}
