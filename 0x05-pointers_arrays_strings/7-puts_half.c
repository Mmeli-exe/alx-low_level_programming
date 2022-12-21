#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to be counted
 * Return: nothing
 */

void print_rev(char *s)
{
	int len;
	int idx;
	char *str = s;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	len--;
	for (idx = (len + 1) / 2; idx < len; idx++)
	{
		_putchar(s[idx]);
	}
	_putchar('\n');
}
