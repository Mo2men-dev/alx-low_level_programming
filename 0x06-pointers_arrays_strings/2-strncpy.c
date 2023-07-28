#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: first string pointer
 * @src: secound string pointer
 * @n: number chars to be copies from src on to dest
 * Return: returns a pointer of the new first string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int nullIndexDest = 0;
	int nullIndexSrc = 0;

	while (nullIndexSrc < n)
	{
		dest[nullIndexDest] = src[nullIndexSrc];
		nullIndexSrc++;
		nullIndexDest++;
	}

	return (dest);
}
