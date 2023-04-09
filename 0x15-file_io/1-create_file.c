#include "main.h"
#include <stdlib.h>

/**
 * create_file - Creates a file.
 *
 * @filename: The name of the file to create.
 * @text_content: The string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int i, fd, w;

	i = 0;
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	w = write(fd, text_content, i);

	if (fd < 0 || w < 0)
		return (-1);

	close(fd);
	return (1);
}
