#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to be searched
 * @c: char to be checked
 * Return: pointer s at first location of c or NULL if c is not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
