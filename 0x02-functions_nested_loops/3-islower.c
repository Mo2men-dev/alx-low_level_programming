#include "main.h"
/**
* _islower - controls if a character is lowercase
* @c: character to be checked
* Return: 0 or 1 if c is lowercase
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
