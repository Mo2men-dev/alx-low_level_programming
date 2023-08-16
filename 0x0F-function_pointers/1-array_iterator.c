#include "function_pointers.h"
/**
 * array_iterator - Executes a given function on each element of an array.
 * @array: The array of integers to iterate through.
 * @size: The size of the array.
 * @action: pointer to a function that takes an int argument and returns void.
 *
 * This function iterates through the array and applies the provided function
 * to each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

