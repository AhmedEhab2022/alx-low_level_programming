#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: The text file.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print,
 * if the file can not be opened or read, return 0,
 * if filename is NULL return 0,
 * if write fails or does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t *buffer;
	ssize_t fd;
	ssize_t len;
	ssize_t len_letters;


	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	len = read(fd, buffer, letters);
	len_letters = write(STDOUT_FILENO, buffer, len);

	free(buffer);
	close(fd);
	return (len_letters);
}
