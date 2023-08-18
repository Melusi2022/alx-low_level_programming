#include "3-calc.h"

/**
 * op_add - returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Returns: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the product of two a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a and b
 * @a: the first number
 * @b: the second nuumber
 *
 * Return: the result of the division of a and b
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return (0);
	}
}

/**
 * op_mod - returns the remainder of the division of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		return (0);
	}
}
