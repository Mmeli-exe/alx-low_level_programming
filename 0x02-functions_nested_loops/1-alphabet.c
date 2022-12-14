#include "main.h"

/**
 * print_alphabet - prints lowercase letters
 * Return: nothing
 */

void print_alphabet(void)
{
	int ltr;

	for (ltr = 0; ltr < 26; ltr++)
		_putchar(ltr + 97);
	_putchar('\n');
}

