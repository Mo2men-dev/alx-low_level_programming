#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to be searched
 * @accept: characters to be compared to
 * Return: number of matched characters
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int curr_count = 0;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				curr_count++;
			}
		}
		if (curr_count > count)
		{
			count = curr_count;
		}
		else
		{
			break;
		}
	}

	return (count);
}

