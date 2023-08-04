#include "main.h"
#include <stdio.h>

/**
 * check - checks for the square root
 * @p: input value
 * @i: input value
 *
 * Return: int
 */
int check(int p, int i)
{
	if (p * p == i)
		return (p);
	if (p * p > i)
		return (-1);
	return (check(p + 1, i));
}
/**
 * _sqrt_recursion - returns the square root of number
 * @n: input value
 * Return: a square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (check(1, n));
}
