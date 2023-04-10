#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * @argc: The counter of arguments that passed from terminal.
 * @argv: An Array of arguments That passed from terminal.
 *
 * Return: 0 if succes.
 * if the number of argument is not the correct one, exit with code 97.
 * if file_from does not exist, or if you can not read it, exit with code 98.
 * if you can not create or if write to file_to fails, exit with code 99.
 * if you can not close a file descriptor , exit with code 100.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, w, r;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fd1 = open(argv[1], O_RDONLY);
	r = read(fd1, buffer, 1024);
	if (fd1 < 0 || r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer), exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w = write(fd2, buffer, r);
	if (fd2 < 0 || w < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer), exit(99);
	}
	if (close(fd1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	else if (close(fd2))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	close(fd1), close(fd2), free(buffer);
	return (0);
}
