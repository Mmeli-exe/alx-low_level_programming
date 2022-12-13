#include "main.h"

/**
 * main - call print_putchar
 * Return: 0 always success
 */

int main(void)
{
	print_putchar();
	return (0);
}

/**
 * print_putchar - pritn string "-putchar"
 *
 * Return: nothing
 */

void print_putchar(void)
{
	int ltr;
	char str[] = "_putchar";

	for (ltr = 0; ltr < 8; ltr++)
		_putchar(str[ltr]);
	_putchar('\n');
}
