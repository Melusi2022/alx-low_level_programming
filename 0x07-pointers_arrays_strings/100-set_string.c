#include "main.h"
/**
 * set_string - sets the value of a pointer to char
 * @s: pointer to a pointer to char
 * @to: pointer to a char
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
