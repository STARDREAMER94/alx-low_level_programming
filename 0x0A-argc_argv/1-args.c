#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: - argument counter
 * @argv: - argument vector
 * Return: always 0
 * Write a program that prints the number of arguments passed into it.
 * Your program should print a number, followed by a new line
 */

int main(int argc, char *argv[])
{
	(void) **argv;
	printf("%d\n", argc - 1);

	return (0);
}

