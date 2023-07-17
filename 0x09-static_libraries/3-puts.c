#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * FYI: The standard library provides a similar function: puts
 * @str: inputted pointer/array variable
 * Return: void, none
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
