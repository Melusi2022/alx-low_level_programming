#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lower case followed by a new line.
 *
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar (i);
	_putchar('\n');
}
