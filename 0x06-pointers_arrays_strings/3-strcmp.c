#include "main.h"
/**
 *_strcmp - compares 2 strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: s1, S2
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
