#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - it will read a text file and print it.
 *
 * @filename: The text file to read.
 * @letters: The numbers for letter being read.
 *
 * Return: 0 when the fuction fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t mp;
	ssize_t u;
	ssize_t f;

	mp = open(filename, O_RDONLY);
	if (mp == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	f = read(mp, buf, letters);
	u = write(STDOUT_FILENO, buf, f);

	free(buf);
	close(mp);
	return (u);
}
