#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int row;
	int col;

	for (row = 1; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (col < (size - row))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
