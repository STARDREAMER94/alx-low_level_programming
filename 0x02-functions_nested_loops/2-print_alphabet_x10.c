#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the lowercase alphabet
 * followed by a new line
 * You can only use _putchar twice in your code
 *
 */

void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{

	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	j++;
	_putchar('\n');


	}


}
