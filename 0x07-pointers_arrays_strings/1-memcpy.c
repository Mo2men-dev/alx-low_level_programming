#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory area to be copied to
 * @src: memory area to copy from
 * @n: number of bytes to be copied
 * Return: pointer dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

