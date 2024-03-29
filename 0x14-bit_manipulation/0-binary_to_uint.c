#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int
 * @b: binary.
 *
 * Return: unsigned int or 0 if
 * there is one or more characters in the string b that is not 0 or 1.
 * b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a;
	int len, base_2;

	if (!b)
		return (0);

	a = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_2 = 1; len >= 0; len--, base_2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			a += base_2;
		}
	}

	return (a);
}
