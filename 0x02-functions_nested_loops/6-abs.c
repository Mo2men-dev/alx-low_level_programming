#include "main.h"
/**
* _abs - returns the abs value of a num
* @n: num to be checked
* Return: a positve num or 0
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-n);
	}

	return (0);
}
