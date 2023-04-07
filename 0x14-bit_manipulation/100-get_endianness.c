#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int p;
	char *n;

	p = 1;
	n = (char *) &p;

	return ((int)*n);
}
