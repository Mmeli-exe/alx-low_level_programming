#include "main.h"

/**
 * more_numbers - prints 0 to 14
 * Return: Always 0
 */

void more_numbers(void)
{
	int num;

	for (num = 0; num < 15; num++)
	{
		if (num > 9)
			_putchar((num / 10) + 48);
		_putchar((num % 10) + 48);
	}
	_putchar('\n');
}

