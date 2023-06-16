#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * A C program that prints a line to the standard error
 * NOT allowed to use any functions listed in the NAME section of:
 * the man (3) printf or man (3) puts
 * compile without warning when using the -Wall gcc option
 * Return: 1 (success)
 */

int main(void)
{

write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);


return (1);

}
