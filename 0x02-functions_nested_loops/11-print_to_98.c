#include "main.h"

/**
 * print_to_98 - counts from a given number to 98
 *
 * @n: the given subery
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (;n < 99; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + 48);
				_putchat((n % 10) + 48);
			}
			else
			{
				_putchar(n + 48);
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		for (;n > 97; n--)
		{
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		_putchar('9');
		_putchar('8');
	}
}
