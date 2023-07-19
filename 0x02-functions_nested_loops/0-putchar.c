#include <unistd.h>
#include "main.h"

/**
 * _putchar - Prints a character to standard output
 * @c: The character to be printed
 *
 * Return: On success, return the character printed
 * On error return -1 and set errno appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Entry point
 *
 * Return - Always 0 (Success)
 */

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
