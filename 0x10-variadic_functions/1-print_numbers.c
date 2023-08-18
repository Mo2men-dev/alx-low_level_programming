#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print a variable number of integers with a separator.
 * @separator: The string separator between numbers (or NULL for no separator).
 * @n: The number of integers to be printed.
 * @...: Variable number of integer arguments to be printed.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n > 0)
	{
		printf("%i", va_arg(ap, int));
		for (i = 1; i < n; i++)
		{
			printf("%s%i", (separator != NULL) ? separator : "", va_arg(ap, int));
		}
	}
	printf("\n");
	va_end(ap);
}

