#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}

	return (arr);
}

