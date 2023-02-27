#include "main.h"

/**
 * puts2 - prints every other character of a string, followed by a new line
 * @str: input string
 * Return: print
 */

void puts2(char *str)
{
	int smart = 0;
	int t = 0;
	char *q = str;
	int p;

	while (*q != '\0')
	{
		q++;
		smart++;
	}
	t = smart - 1;
	for (p = 0; p <= t; p++)
	{
		if (p % 2 == 0)
		{
			_putchar(str[p]);
		}
	}
	_putchar('\n');
}
