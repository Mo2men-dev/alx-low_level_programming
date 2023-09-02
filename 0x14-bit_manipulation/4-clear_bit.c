#include "main.h"

/**
 * clear_bit - Clears the value of a bit at a given index.
 * @n: A pointer to an unsigned long integer.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Error: index out of range */
	}

	*n &= ~(1 << index); /* Clear the bit at the specified index */

	return (1); /* Success */
}
