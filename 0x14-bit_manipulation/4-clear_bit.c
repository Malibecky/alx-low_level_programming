#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index starting from 0 of the bit.
 *
 * Return: 1 if it worked or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int c;

	if (index > 29)
		return (-1);

	c = 1 << index;

	if (*n & c)
		*n ^= c;

	return (1);
}
