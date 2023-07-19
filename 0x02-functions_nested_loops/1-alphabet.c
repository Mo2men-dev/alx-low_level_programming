#include "main.h"

/**
* main - function prints "_putchar" to stdout
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = "a"; i < "z"; i++)
	{
		_putchar(i);
	}

	_putchar(10);
	return (0);
}
