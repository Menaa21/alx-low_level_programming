#include "main.h"

/**
 * append_text_to_file - it appends the text to the end of the file.
 *
 * @filename: it point the name of the file.
 * @text_content: The string added at the end of the file.
 *
 * Return: 1 (success) -1 (fail)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int mp, u, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	mp = open(filename, O_WRONLY | O_APPEND);
	u = write(mp, text_content, len);

	if (mp == -1 || u == -1)
		return (-1);

	close(mp);

	return (1);
}
