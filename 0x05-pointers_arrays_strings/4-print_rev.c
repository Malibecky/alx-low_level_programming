#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int becky = 0;
	int b;

	while (*s != '\0')
	{
		becky++;
		s++;
	}
	s--;
	for (b = becky; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');

}
