#include "main.h"

/**
* main - function prints "_putchar" to stdout
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}

	_putchar(10);
	return (0);
}
