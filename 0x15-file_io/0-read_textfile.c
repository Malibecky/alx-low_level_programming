#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed, return 0 if;
 * the file cannot be opened or read
 * if the filename is null
 * if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int pd;
	ssize_t pwd, pwr;
	char *buf;

	if (!filename)
		return (0);

	pd = open(filename, O_RDONLY);

	if (pd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	pwd = read(pd, buf, letters);
	pwr = write(STDOUT_FILENO, buf, pwd);

	close(pd);

	free(buf);

	return (pwr);
}
