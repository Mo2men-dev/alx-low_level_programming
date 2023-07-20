#include "main.h"
/**
* times_table - prints every times table from 0 to 9
*
* Return: Always 0
*/
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		putchar('0');
		for (j = 1; j <= 9; j++)
		{
			putchar(',');
			putchar(' ');
			result = i * j;
			if (result <= 9)
			{
				putchar(' ');
				putchar(result + 48);
			}
			else
			{
				putchar((result / 10) + 48);
				putchar((result % 10) + 48);
			}
		}
		putchar('\n');
	}
}
