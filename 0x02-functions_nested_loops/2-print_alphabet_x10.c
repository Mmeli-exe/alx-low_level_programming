#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 *Return: nothing
 */

void print_alphabet_x10(void)
{
	int lns;
	int ltr;

	for (lns = 0; lns < 10; lns++)
	{
		for (ltr = 0; ltr < 26; ltr++)
			_putchar(ltr + 97);
		_putchar('\n');
	}
}
