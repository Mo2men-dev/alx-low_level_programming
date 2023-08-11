#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory block to reallocate.
 * @old_size: Size of the currently allocated memory block.
 * @new_size: New size for the reallocated memory block.
 *
 * Return: Pointer to the reallocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *old_ptr;
	char *new_ptr_char;
	unsigned int min_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	old_ptr = ptr;
	new_ptr_char = new_ptr;
	min_size = (old_size < new_size) ? old_size : new_size;

	while (min_size > 0)
	{
		*new_ptr_char = *old_ptr;
		new_ptr_char++;
		old_ptr++;
		min_size--;
	}

	free(ptr);

	return (new_ptr);
}

