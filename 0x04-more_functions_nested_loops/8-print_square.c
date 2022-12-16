#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 * Return: Always 0
 */

void print_square(int size)
{
	int row;
	int col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
