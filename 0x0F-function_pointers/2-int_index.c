#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search through.
 * @size: The size of the array.
 * @cmp: A pointer to a function that checks for a condition on integers.
 *
 * Return: index of the first element for which the 'cmp' does not return 0.
 *         If no element matches or if size is non-positive, returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}

	return (-1);
}

