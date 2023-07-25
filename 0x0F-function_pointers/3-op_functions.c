#include "3-calc.h"

/**
 * op_add - addition function
 * @a: input int
 * @b: int input
 * Return: sum of a and b (integer)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction function
 * @a: input int
 * @b: int input
 * Return: difference of a and b (integer)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: input int
 * @b: int input
 * Return: product of a and b (integer)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: input int
 * @b: int input
 * Return: result of division of a by b (integer)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus function
 * @a: int input
 * @b: int input
 * Return: remainder of division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
