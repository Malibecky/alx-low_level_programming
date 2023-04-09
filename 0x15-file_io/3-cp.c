#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_1, file_2, err_no;
	ssize_t pchars, pwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_1 file_2");
		exit(97);
	}

	file_1 = open(argv[1], O_RDONLY);
	file_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_1, file_2, argv);

	pchars = 1024;
	while (pchars == 1024)
	{
		pchars = read(file_1, buf, 1024);
		if (pchars == -1)
			error_file(-1, 0, argv);
		pwr = write(file_2, buf, pchars);
		if (pwr == -1)
			error_file(0, -1, argv);
	}

	err_no = close(file_1);
	if (err_no == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_1);
		exit(100);
	}

	err_no = close(file_2);
	if (err_no == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_1);
		exit(100);
	}
	return (0);
}
