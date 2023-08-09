#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates an array of strings with spaces into a single
 *             string.
 * @ac: The number of arguments.
 * @av: An array of strings (arguments).
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, total_length = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			total_length++;
			j++;
		}
		total_length++;
		i++;
	}

	s = malloc((total_length + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	i = 0, k = 0;
	while (i < ac)
	{
		j = 0;
		if (av[i][0] == ' ')
		{
			s[k] = '\n', k++, i++;
		}
		while (av[i][j])
		{
			s[k] = av[i][j], j++, k++;
		}
		i++;
	}

	s[k] = '\n', s[k + 1] = '\0';
	return (s);
}


