#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; ++row)
	{
		for (column = 1; column <= size; ++column)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
