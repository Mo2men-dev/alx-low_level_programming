#include "main.h"

/**
 * _strcat - function appends the src string to the dest string
 * @dest: first string pointer
 * @src: secound string pointer
 * Return: returns a pointer of the new first string
*/

char *_strcat(char *dest, char *src)
{
	int nullIndexDest = 0;
	int nullIndexSrc = 0;

	while (dest[nullIndexDest] != '\0')
	{
		nullIndexDest++;
	}

	while (src[nullIndexSrc] != '\0')
	{
		dest[nullIndexDest] = src[nullIndexSrc];
		nullIndexSrc++;
		nullIndexDest++;
	}

	return (dest);
}
