#include "main.h"

/**
 * create_file - Creates a file and writes text content to it.
 *
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure (cannot be created, write fails, etc.).
 *         The function creates the file with permissions: rw-------.
 *         If the file already exists, it is truncated.
 *         If @filename is NULL, returns -1.
 *         If @text_content is NULL, creates an empty file.
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	while (filename[len] != '\0')
	{
		len++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

