#include "main.h"

/**
 * _strstr - Locates a substring within a string
 * @haystack: The main string to search in
 * @needle: The substring to search for
 * Return: If the substring is found, a pointer to the first character of the
 *         substring within 'haystack' is returned. If the substring is not
 *         found, the function returns 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int needleLen = 0;
	int haystackLen = 0;

	while (needle[needleLen] != '\0')
	{
		needleLen++;
	}

	while (haystack[haystackLen] != '\0')
	{
		int j;

		for (j = 0; j < needleLen; j++)
		{
			if (haystack[haystackLen + j] != needle[j])
			{
				break;
			}
		}

		if (j == needleLen)
		{
			return (haystack + haystackLen);
		}

		haystackLen++;
	}

	return (0);
}

