#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * The function should print the second half of the string
 * If the number of characters is odd, the function should:
 * print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * @str: inputted character pointer containing string text
 * Return: void
 */

void puts_half(char *str)
{
	int n, i = 0, e, d;

	while ((str[i] != '\0'))
	{
		i++;
	}
	if ((i % 2) == 0)
	{
		for (e = (i / 2); str[e] != '\0'; e++)
		{
		_putchar(str[e]);
		}
	}
	else
	{
		n = (i - 1)/2;
		for (d = n; str[d] != '\0'; d++)
		{
		_putchar(str[d]);
		}
	}
	_putchar('\n');
}
