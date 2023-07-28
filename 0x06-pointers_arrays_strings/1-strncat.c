#include "main.h"

/**
 * _strncat - function appends the src string to the dest string
 * @dest: first string pointer
 * @src: secound string pointer
 * @n: number chars to be appended from src on to dest
 * Return: returns a pointer of the new first string
*/

char *_strncat(char *dest, char *src, int n)
{
	int nullIndexDest = 0;
	int nullIndexSrc = 0;

	while (dest[nullIndexDest] != '\0')
	{
		nullIndexDest++;
	}

	while (src[nullIndexSrc] != '\0' && nullIndexSrc < n)
	{
		dest[nullIndexDest] = src[nullIndexSrc];
		nullIndexSrc++;
		nullIndexDest++;
	}

	return (dest);
}
