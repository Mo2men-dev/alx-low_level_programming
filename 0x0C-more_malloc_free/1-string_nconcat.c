#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates n bytes of two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to concatenate from s2.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStr;
	unsigned int s1_len = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int s2_len = (s2 != NULL) ? strlen(s2) : 0;
	unsigned int i;
	unsigned int j;

	if (n >= s2_len)
		n = s2_len;

	newStr = malloc(sizeof(char) * (s1_len + n + 1));
	if (newStr == NULL)
		return (NULL);

	i = 0;

	if (s1 != NULL)
	{
		while (i < s1_len)
		{
			newStr[i] = s1[i];
			i++;
		}
	}

	j = 0;
	while (j < n)
	{
		newStr[i + j] = s2[j];
		j++;
	}

	newStr[s1_len + n] = '\0';

	return (newStr);
}
