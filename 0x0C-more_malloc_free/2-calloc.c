#include <stdlib.h>
#include <string.h>
#include "main.h"

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
	void *arr;
	int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	while (i != size * nmemb)
	{
		arr[i] = 0;
		i++;
	}

	return (arr);
}

