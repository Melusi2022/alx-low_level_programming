#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Returns: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
