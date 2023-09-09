#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: The name of the file to which to append text.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 *         Does not create the file if it does not exist.
 *         If @filename is NULL, returns -1.
 *         If @text_content is NULL, does not add anything to the file.
 *         Returns 1 if the file exists and -1 if it does not exist or if
 *         you do not have the required permissions to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
