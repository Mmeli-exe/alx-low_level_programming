#include "main.h"

/**
 * print_line - prints a line
 * @n: number of _ to be printed
 * Return: Always 0
 */

void print_line(int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

