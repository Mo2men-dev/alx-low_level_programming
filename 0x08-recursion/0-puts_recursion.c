/**
 * _puts_recursion - Prints a string using recursion followed by a newline.
 * @s: Pointer to the string to be printed.
 *
 * Description: This function prints the characters of a string recursively
 *              until it reaches the null terminator '\0', then prints a newline.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s); /* Print the current character */
		s++; /* Move to the next character in the string */
		_puts_recursion(s); /* Recursively call the function with the updated pointer */
	}
	else
	{
		putchar(10); /* Print a newline when the null terminator is reached */
	}
}

