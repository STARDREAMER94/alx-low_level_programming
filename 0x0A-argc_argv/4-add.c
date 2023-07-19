#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point
 * @argc: - argument counter
 * @argv: - argument vector
 * Return: always 0
 * Write a program that adds positive numbers.Print the result,
 *      followed by a new line
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits, print Error,
 *      followed by a new line, and return 1
 * You can assume that numbers and the addition of all the numbers can
 *     be stored in an int
 */

int main(int argc, char *argv[])
{
	unsigned int j, add = 0;
	int i;

	if (argc > 1)
	{

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
		if (argv[i][j] < 48 || argv[i][j] > 57)
		{
			printf("Error\n");
			return (1);
		}
		}
		
		add += atoi(argv[i]);
		argv[i] += 1;
		
	}
	}
	printf("%i\n", add);

	return (0);
}

