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
	int s1_len = 0, s2_len = 0, i = 0, j = 0, k = 0;
	char *concat_str;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 != NULL)
		s1_len = get_str_len(s1);

	if (s2 != NULL)
		s2_len = get_str_len(s2);

	concat_str = malloc((s1_len + s2_len + 1) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);

	while (i < s1_len)
		concat_str[k++] = s1[i++];

	while (j < s2_len)
		concat_str[k++] = s2[j++];

	concat_str[k] = '\0';

	return (concat_str);
}

