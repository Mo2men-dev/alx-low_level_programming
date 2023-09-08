#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to standard output.
 *
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 *	0 on failure, including NULL filename, inability to open the file,
 *	read error, or write error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff = (char *)malloc(letters);
	ssize_t bytes_read;
	int fd;
	ssize_t printed;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	bytes_read = read(fd, buff, letters);
	if (bytes_read == -1)
		return (0);

	printed = write(STDOUT_FILENO, buff, bytes_read);
	if (printed == -1)
		return (0);

	close(fd);

	return (printed);
}

