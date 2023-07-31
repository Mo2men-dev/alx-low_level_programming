#include "main.h"

#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard.
 *
 * @a: A 2D array representing the chessboard.
 *
 * Description: This function prints the contents of a chessboard, which is
 * represented by a 2D array 'a' of size 8x8. Each cell of the array contains
 * a character representing the piece on the corresponding chessboard position.
 *
 * Return: None (void).
 */

void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (a[i][j] == ' ')
			{
				break;
			}
			else
			{
				_putchar(a[i][j]);
			}
		}
		_putchar(10);
	}
}


