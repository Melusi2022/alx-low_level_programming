#include "main.h"
/**
 * check - checks to see if number is prime
 * @p: input value
 * @i: input value
 * Return: 1 if prime otherwise 0
 */
int check(int p, int i)
{
	if (i < 2 || i % p == 0)
		return (0);
	else if (p > i / 2)
		return (1);
	else
		return (check(p + 1, i));
}

/**
 * is_prime_number - Entry point
 * @n: input value
 *
 * Return: result
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
