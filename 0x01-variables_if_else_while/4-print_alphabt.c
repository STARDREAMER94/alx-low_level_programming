#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, prints to the standard output
 * a program that prints the alphabet in lowercase, followed by a new line
 * Print all the letters except q and e
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

	/* Write the Character to stdout*/
	while (letter <= 'z')
	{
		if ((letter == 'e') || (letter == 'q'))
		{
			letter++;
		}
		else
		{
			putchar(letter);
			letter++;
		}

	}

	putchar('\n');

	return (0);

}
