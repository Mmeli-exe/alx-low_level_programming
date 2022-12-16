#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of \ to be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int slsh;
	int spc;

	for (slsh = 0; slsh < n; slsh++)
	{
		for (spc = 0; spc < slsh + 1; spc++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
