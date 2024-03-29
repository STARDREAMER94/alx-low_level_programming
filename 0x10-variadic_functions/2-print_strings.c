#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings,
 *               If separator is NULL, don’t print it
 * @n: the number of strings passed to the function
 * If one of the string is NULL, print (nil) instead
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
	s = va_arg(ap, char*);
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);

	if (separator != NULL && (i != (n - 1)))
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

