#include "function_pointers.h"
/**
 * print_name - Calls a function to print a name.
 * @name: The name to be printed.
 * @f: pointer to a function that takes char pointer argument and returns void.
 *
 * This function takes a name and a function pointer as arguments.
 * It then calls the provided function, passing the name as an argument to it.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

