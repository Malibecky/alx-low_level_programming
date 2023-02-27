#include "main.h"

/**
 * int _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int becky = 0;

	while (*s != '\0')
	{
		becky++;
		s++;
	}
	return (becky);

}
