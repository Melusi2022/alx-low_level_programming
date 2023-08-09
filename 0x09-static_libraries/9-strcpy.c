#include "main.h"

/**
 * _strcpy - copies the string pointed by str
 * @dest: char type string
 * @src: char type string
 * copy the string pointed to by the pointer 'src'
 * to the buffer pointed by the 'dest'
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do	{
		z++;
			dest[z] = src[z];
	} while (src[z] != '\0');
	return (dest);
}
