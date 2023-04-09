#include "main.h"

/**
 * flip_bits - returns number of bits needed to fli
 * p from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int becky = n ^ m, bits = 0;

	while (becky > 0)
	{
		bits += (becky & 1);
		becky >>= 1;
	}
	return (bits);
}


