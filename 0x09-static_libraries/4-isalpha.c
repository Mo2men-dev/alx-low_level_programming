#include "main.h"
/**
* _isalpha - checks if a character is lowercase or uppercase
* @c: character to be checked
* Return: 0 or 1 if c is lowercase or uppercase
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
