#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on sucess, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, (int)strlen(text_content));
		if (bytes_written == -1 || (size_t)bytes_written != strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
