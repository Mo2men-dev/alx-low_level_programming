#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print a variable number of values based on the format.
 * @format: The format string specifying the types of values to print.
 * @...: Variable number of arguments based on the format.
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int format_len = 0, itr = 0;
	char *sep = ", ";
	char *curr_arg;
	va_list ap;

	va_start(ap, format);
	while (format[format_len] != '\0')
	{
		format_len++;
	}

	while (format[itr] != '\0')
	{
		if (itr == (format_len - 1))
		{
			sep = "";
		}
		switch (format[itr])
		{
		case 'c':
			printf("%c%s", va_arg(ap, int), sep);
			break;
		case 'i':
			printf("%i%s", va_arg(ap, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(ap, double), sep);
			break;
		case 's':
			curr_arg = va_arg(ap, char *);
			if (curr_arg == NULL)
				curr_arg = "(nil)";
			printf("%s%s", curr_arg, sep);
			break;
		}
		itr++;
	}

	printf("\n");
	va_end(ap);
}
