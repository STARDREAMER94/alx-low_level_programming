#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: - argument counter
 * @argv: - argument vector
 * Return: always 0
 * Write a program that prints all arguments it receives
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

