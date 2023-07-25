#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 followed by a new line
 * but for multiples of three print fizz instead of the number
 * and for the multipleas of five print Buzz
 * for numbers which are multiples of three and five print fizzbuzz
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
