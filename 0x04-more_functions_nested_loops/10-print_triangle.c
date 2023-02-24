#include "main.h"

/**
 * print_triangle - Prints a triangle
 *
 * Description: Prints diagonal lines
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			putchar('\n');
		}
	}
}
