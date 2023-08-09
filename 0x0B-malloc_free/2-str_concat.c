#include <stdlib.h>
#include "main.h"

/**
 * get_str_len - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int get_str_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: If concatenation fails or if s1 or s2 is NULL, returns NULL.
 *         Otherwise, returns a pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int s1_len;
	int s2_len;
	int i;
	int j;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	s1_len = (s1 == NULL) ? 0 : get_str_len(s1);
	s2_len = (s2 == NULL) ? 0 : get_str_len(s2);

	concat_str = malloc((s1_len + s2_len + 1) * sizeof(char));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	i = 0;
	if (s1 != NULL)
	{
		while (i < s1_len)
		{
			concat_str[i] = s1[i];
			i++;
		}
	}

	if (s2 != NULL)
	{
		j = 0;
		while (i < s1_len + s2_len)
		{
			concat_str[i] = s2[j];
			i++;
			j++;
		}
	}

	concat_str[i] = '\0';

	return (concat_str);
}
