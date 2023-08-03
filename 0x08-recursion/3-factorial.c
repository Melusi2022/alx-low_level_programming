#include "main.h"

/**
 * factorial - function that returnsthe factorial of a given number
 *
 * @n: number to calculate the factorial
 *
 * Return: -1 if n is negative or n iffactorial is positive
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
