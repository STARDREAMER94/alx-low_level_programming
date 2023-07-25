#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers ", "
 * @n: the number of integers passed to the function
 * If separator is NULL, don’t print it
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(ap, int));
		}
		else
		{
			if (i == (n - 1))
				printf("%d", va_arg(ap, int));
			else
			printf("%d%s", va_arg(ap, int), separator);
		}
	}
	printf("\n");

	va_end(ap);
}
