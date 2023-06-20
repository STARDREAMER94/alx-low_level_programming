
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, prints to the standard output
 *  a program that prints the alphabet in lowercase, and then in uppercase,
 *   followed by a new line.
 * ONLY use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar thrice in your code
 * All your code should be in the main function
 * Return: Always 0 (success)
 */

int main(void)

{

    /* Get the character to be written */
	char letter = 'a';
	char Cletter = 'A';

    /* Write the Character to stdout */
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (Cletter <= 'Z')
	{
		putchar(Cletter);
		Cletter++;
	}
	putchar('\n');
	return (0);

}
