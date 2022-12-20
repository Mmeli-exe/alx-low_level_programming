#include "main.h"

/**
 * _puts - prints line to stdout
 * @str: string to be printed
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
