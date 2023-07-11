#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * @s: inputted pointer variable
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
