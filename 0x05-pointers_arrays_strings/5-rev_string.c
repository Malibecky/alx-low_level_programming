#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: string in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int becky = 0;
	int b;

	while (s[becky] != '\0')
		becky++;
	for (b = 0; b < becky; b++)
	{
		becky--;
		rev = s[b];
		s[b] = s[becky];
		s[becky] = rev;
	}
}
