#include "main.h"

/**
 * create_array - Creates an array of chars initialized with a specific value.
 * @size: The size of the array to create.
 * @c: The character value to initialize the array with.
 *
 * Return: If size is 0 or if memory allocation fails, returns a pointer
 *         to a null-terminated string containing just '\0'. Otherwise,
 *         returns a pointer to the newly created array.
 */
char *create_array(unsigned int size, char c)
{
	char nl = '\0';
	char *ptr = &nl;

	if (size == 0)
	{
		return (ptr);
	}

	char *s = malloc(size * sizeof(c));

	if (s == '\0')
	{
		return (ptr);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
