#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string to be compared
 * @s2: secound string to be compared
 * Return: return positive number if s1 > s2 negative if s2 > s1 and 0 if equal
*/

int _strcmp(char *s1, char *s2)
{
	int i1 = 0;
	int i2 = 0;

	while (s1[i1] != '\0')
	{
		if (s1[i1] != s2[i2])
		{
			return (s1[i1] - s2[i2]);
		}
		else if (s1[i1] == s2[i2])
		{
			i1++;
			i2++;
		}
	}
return (0);
}
