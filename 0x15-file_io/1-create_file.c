#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content to be written in the file.
 *
 * Return: 1 upon success, -1 upon failure
 */
int create_file(const char *filename, char *text_content)
{
	int pd;
	int pletters;
	int pwr;

	if (!filename)
		return (-1);

	pd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (pd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (pletters = 0; text_content[pletters]; pletters++)
		;

	pwr = write(pd, text_content, pletters);

	if (pwr == -1)
		return (-1);

	close(pd);

	return (1);
}
