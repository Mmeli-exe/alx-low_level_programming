#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to be counted
 * Return: nothing
 */

void print_rev(char *s)
{
	int len;
	int idx
	char *str = s;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	idx = len - 1;
	for (; idx > -1; idx--)
	{
		_putchar(s[idx]);
	}
	_putchar('\n');
}
