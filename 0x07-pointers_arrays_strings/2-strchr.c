#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to be searched
 * @c: char to be checked
 * Return: pointer s at first location of c or NULL if c is not found
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s = &s[i];
			return (s);
		}
		i++;
	}

	if (*s == c)
		return (s);
	return (0);
}
