#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints the POSIX standard output
 * @filename: the text file being read
 * @letters: number of letters to read and print
 * Return: number of letters || 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	char *buff;

	ssize_t _write, _read;

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	_read = read(fd, buff, letters);
	if (_read == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	_write = write(STDOUT_FILENO, buff, _read);
	if (_write == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	close(fd);
	return (_read);
}
