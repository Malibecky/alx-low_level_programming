#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked or -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p;

	if (index > 32)
		return (-1);

	p = 1 << index;
	*n = (*n | p);

	return (1);
}
