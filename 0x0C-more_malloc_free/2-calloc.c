#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory for the array,
 *         or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	void *arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	memset(arr, 0, nmemb * size);

	return (arr);
}

