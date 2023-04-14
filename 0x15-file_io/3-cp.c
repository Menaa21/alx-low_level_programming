#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - it allocates 1024 bytes to buffer.
 *
 * @file: name of file buffer meant for storing chars for.
 *
 * Return: it points to the new allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - The file descriptor gets closed.
 *
 * @mp: The descriptor that is closed.
 */
void close_file(int mp)
{
	int u;

	u = close(mp);

	if (u == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", mp);
		exit(100);
	}
}

/**
 * main - The copies of content from one file to another.
 *
 * @argc: its the numbers of arguments in a program.
 * @argv: it points to the arguments.
 * Return: 0 Success
 *
 * Description: if the argument count is invalid - 97 exit code.
 * File doesnt exist or its unreadable - 98 exit code.
 * File can not be written or created - 99 exit code.
 * File can not be closed - 100 exity code.
 */
int main(int argc, char *argv[])
{
	int from, to, u, m;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	u = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || u == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		m = write(to, buffer, u);
		if (to == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		u = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (u > 0);
	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
