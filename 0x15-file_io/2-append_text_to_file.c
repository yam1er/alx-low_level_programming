#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: filename
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on sucess and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
