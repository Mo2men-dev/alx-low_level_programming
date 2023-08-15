#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strdup(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strdup - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strdup(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pupp;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	pupp = malloc(sizeof(dog_t));
	if (pupp == NULL)
		return (NULL);

	pupp->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (pupp->name == NULL)
	{
		free(pupp);
		return (NULL);
	}

	pupp->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (pupp->owner == NULL)
	{
		free(pupp->name);
		free(pupp);
		return (NULL);
	}

	pupp->name = _strcopy(pupp->name, name);
	pupp->age = age;
	pupp->owner = _strcopy(pupp->owner, owner);

	return (pupp);
}
