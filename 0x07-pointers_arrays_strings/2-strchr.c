#include "main.h"
/**
 *_strchr - function that locates a character in a string
 *@s: pointer
 *@c: the character to locate
 *Return: a pointer to the first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
