#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a struct dog with provided values.
 * @d: Pointer to the struct dog variable to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description:
 *	This function takes a pointer to a struct dog and initializes its
 *	attributes with the provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

