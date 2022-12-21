#include "main.h"

/**
 * puts_half - print to be halved
 * @s: string sourc pointer
 * Return: nothing
 */

void puts_half(char *str)
{
	int len;
	int idx;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (idx = (len + 1) / 2; idx < len; idx++)
	{
		_putchar(str[idx]);
	}
	_putchar('\n');
}
