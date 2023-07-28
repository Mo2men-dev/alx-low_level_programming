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
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
