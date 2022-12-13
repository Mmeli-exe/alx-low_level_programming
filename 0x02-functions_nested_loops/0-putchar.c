#include <main.h>

/**
 * print_putchar - prints the string"_putchar"
 * Return: 0 always success
 */

int print_putchar(void)
{
	int ltr;
	char str[] = "_putchar";

	for (ltr = 0; ltr < 8; ltr++)
		_putchar(str[ltr]);
	return (0);
}
