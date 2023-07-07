#include "main.h"

/**
 * print_rev - Write a function that prints a string, in reverse,
 * followed by a new line.
 * @s: inputted pointer value
 * Return: value of type integer
 */

void print_rev(char *s)
{
	int i, d, count = 0;


	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (d = count - 1; d >= 0; d--)
	{
		_putchar(s[d]);
	}
	_putchar('\n');

}
