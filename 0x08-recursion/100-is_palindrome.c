#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(const char *str)
{
	if (*str == '\0')
		return (0);

	return (1 + _strlen(str + 1));
}

/**
 * is_palindrome_recursive - Helper function to check if a string is palindrome
 * recursively.
 * @str: The input string.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the string is palindrome, 0 otherwise.
 */
int is_palindrome_recursive(const char *str, int start, int end)
{
	if (start >= end)
		return (1);

	if (str[start] != str[end])
		return (0);

	return (is_palindrome_recursive(str, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @str: The input string.
 *
 * Return: 1 if the string is palindrome, 0 otherwise.
 */
int is_palindrome(char *str)
{
	int len = _strlen(str);

	return (is_palindrome_recursive(str, 0, len - 1));
}

