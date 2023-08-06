#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_integer - check if a given string consists of digits
 * @str: pointer
 *
 * Return: 1
 */
int is_positive_integer(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * main - program that adds positive numbers
 * @argc: number of arguments
 * @argv: Array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_positive_integer(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
