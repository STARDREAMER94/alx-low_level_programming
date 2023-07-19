#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: - argument counter
 * @argv: - argument vector
 * Return: always 0
 * Write a program that multiplies two numbers.
 * Your program should print the result of the multiplication,
 *    followed by a new line
 * You can assume that the two numbers and result of the multiplication:
 *    can be stored in an integer
 * If the program does not receive two arguments:
 *    your program should print Error, followed by a new line, and return 1
 */

int main(int argc, char *argv[])
{
	int a, b;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;

	printf("%i\n", mul);

	return (0);
}

