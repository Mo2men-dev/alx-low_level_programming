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
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
