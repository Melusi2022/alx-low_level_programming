#include "main.h"

/**
 *_memcpy - function that copies area
 *@dest: pointer
 *@src: pointer
 *@n: unsigned integer
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (start);
}
