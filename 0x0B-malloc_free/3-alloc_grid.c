#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: The width of the 2D array.
 * @height: The height of the 2D array.
 *
 * Return: A pointer to the newly allocated 2D array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);

	while (i < height)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(matrix[j]);
				j++;
			}
			free(matrix);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}

	return (matrix);
}

