#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: Nothing
 */

void print_rev(char *s)
{
	int idx;
	
	idx = 0;
	while (*s != '\0')
	{
		*s++;
		idx++;
	}
	for  (; idx >= 0; idx--)
	{
		_putchar(s[idx]);
	}
	_putchar('\n');
}
