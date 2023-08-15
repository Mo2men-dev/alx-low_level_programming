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
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		if (d->age < 0)
			printf("Age: %s\n", "(nil)");
		else
			printf("Age: %.2f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
	else
	{
		return;
	}
}

