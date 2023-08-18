#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print a variable number of strings with a separator.
 * @separator: The string separator between strings (or NULL for no separator).
 * @n: The number of strings to be printed.
 * @...: Variable number of string arguments to be printed.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *curr_arg, *sep;
	va_list ap;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *)separator;

	va_start(ap, n);

	if (n > 0)
		printf("%s", va_arg(ap, char *));
	for (i = 1; i < n; i++)
	{
		curr_arg = va_arg(ap, char *);
		if (curr_arg == NULL)
			curr_arg = "(nil)";
		printf("%s%s", sep, curr_arg);
	}

	printf("\n");
	va_end(ap);
}

