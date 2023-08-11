#include <stdlib.h>
#include <string.h>

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
	unsigned int i;
	unsigned int totalLen = strlen(s1) + n;

	if (n >= strlen(s2))
		n = strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	newStr = malloc(sizeof(char) * (totalLen + 1));
	if (newStr == NULL)
		return (NULL);

	i = 0;
	while (i < strlen(s1))
	{
		newStr[i] = s1[i];
		i++;
	}

	while (i < totalLen)
	{
		newStr[i] = s2[i - strlen(s1)];
		i++;
	}

	newStr[totalLen] = '\0';

	return (newStr);
}
