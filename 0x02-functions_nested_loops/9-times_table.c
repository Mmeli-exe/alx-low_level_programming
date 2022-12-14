#include "main.h"

/**
 * times_table - prints lowercase letters
 * Return: nothing
 */

void times_table(void)
{
	int r;
	int c;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			_putchar((r*c) + 48);
			if (c !=9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

