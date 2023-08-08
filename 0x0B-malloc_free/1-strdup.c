#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string in memory.
 * @str: The string to duplicate.
 *
 * Return: If str is NULL or memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the newly duplicated string.
 */
char *_strdup(char *str)
{
	int strLen = 0;
	char *newStr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[strLen] != '\0')
	{
		strLen++;
	}

	newStr = malloc((strLen + 1) * sizeof(char));

	if (newStr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < strLen)
	{
		newStr[i] = str[i];
		i++;
	}

	newStr[i] = '\0';

	return (newStr);
}
