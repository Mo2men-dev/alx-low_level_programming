#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description:
 *   This function prints the attributes of the provided struct dog,
 *   including name, age, and owner. If any attribute is NULL, "(nil)"
 *   is printed instead.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
