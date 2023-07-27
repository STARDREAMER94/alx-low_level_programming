#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * c: char, i: integer, f: float
 *    s: char * (if the string is NULL, print (nil) instead
 *    any other char should be ignored
 * You can declare a maximum of 9 variables
 * Print a new line at the end of your function
 */
void print_all(const char * const format, ...)
{
	int i;
	char *sep = "", *str;
	va_list ap;

	va_start(ap, format);

	if (format)
	{
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(ap, int));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(ap, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(ap, double));
			break;
		case 's':
			str = (va_arg(ap, char *));
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", sep, va_arg(ap, char *));
			break;
		default:
			i++;
			continue;
		}
	sep = ", ";	
	i++;	
	}
	}
	printf("\n");
	va_end(ap);
}



