/**
 * _puts_recursion - Prints a string using recursion followed by a newline.
 * @s: Pointer to the string to be printed.
 *
 * Description: This function prints the characters of a string recursively
 * until it reaches the null terminator '\0', then prints a newline.
 *
 * Return: Nothing (void)
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar(10); /* Print a newline when the null terminator is reached */
	}
}

