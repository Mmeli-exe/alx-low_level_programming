#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: Nothing
 */

void print_rev(char *s)
{
	int idx;
	char *str = s;

	idx = 0;
	while (*str != '\0')
	{
		*str++;
		idx++;
	}
	idx--;
	for  (; idx >= 0; idx--)
	{
		_putchar(s[idx]);
	}
	_putchar('\n');
}
