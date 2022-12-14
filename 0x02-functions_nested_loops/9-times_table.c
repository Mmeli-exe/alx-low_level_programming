#include "main.h"

/**
 * times_table - prints lowercase letters
 * Return: nothing
 */

void times_table(void)
{
	int r;
	int c;
	int p;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			p = r * c;
			if (c == 0)
			{
				_putchar(p + 48);
			}
			else if (p < 10)
			{
				_putchar(' ');
				_putchar(p + 48);
			}
			else
			{
				_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

