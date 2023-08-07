#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add to the end of the file
 * Return: 1 if successful' -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, countn = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (countn = 0; text_content[countn];)
			countn++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, countn);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
