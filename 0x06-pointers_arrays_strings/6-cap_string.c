#include "main.h"

/**
 * cap_string - function capitalizes all words of a string
 * @s: first string pointer
 * Return: returns a pointer to the new string
*/

char *cap_string(char *s)
{
	int i = 0;
	int j = 0;

	char symbols[13] = {' ', '\t',  '\n', ',', ';', '.', '!'
, '?', '\"', '\(', ')', '{', '}'};

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 13)
		{
			if (s[i] == symbols[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i + 1] = s[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (s);
}
