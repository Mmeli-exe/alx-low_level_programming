#include "main.h"

/**
 * puts2 - print every other character
 * @str: string source pointer
 * Return: Nothing
 */

void puts2(char *str)
{
	int idx = 0;

	while (str[idx] != '\0')
	{
		if (idx % 2 == 0)
			_putchar(str[idx]);
		idx++;
	}
}
