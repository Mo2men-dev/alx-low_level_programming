#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * check_IO_stat - Checks the status of an I/O operation and handles errors.
 *
 * @stat: The return value of an I/O operation (usually -1 on error).
 * @fd: The file descriptor associated with the operation.
 * @filename: The name of the file involved in the operation (if applicable).
 * @mode: The mode of the op ('C' for close, 'O' for open/read, 'W' for write).
 *
 * function checks the status of an I/O op and, if it indicates an error,
 * it prints an error message to the sterr and exits with an error code.
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

