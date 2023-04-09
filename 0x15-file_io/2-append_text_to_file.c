#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: content in the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int bd;
	int bletters;
	int bwr;

	if (!filename)
		return (-1);

	bd = open(filename, O_WRONLY | O_APPEND);

	if (bd == -1)
		return (-1);

	if (text_content)
	{
		for (bletters = 0; text_content[bletters]; bletters++)
			;

		bwr = write(bd, text_content, bletters);

		if (bwr == -1)
			return (-1);
	}

	close(bd);

	return (1);
}
