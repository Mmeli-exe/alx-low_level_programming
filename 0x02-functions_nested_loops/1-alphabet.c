#include "main.h"

/**
 * print_alphabet - prints lowercase letters
 * Return: nothing
 */

void print_alphabet(void)
{
	int r;

	for (r = 0; r < 26; r++)
		_putchar(r + 97);
	_putchar('\n');
}

