#include "main.h"

/**
 * jack_bauer - world's worst clock
 *Return: nothing
 */

void jack_bauer(void)
{
	int hrs;
	int min;

	for (hrs = 0; lns < 24; lns++)
	{
		for (min = 0; ltr < 60; ltr++)
		{
			_putchar((hrs / 10) + 48);
			_putchar((hrs % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
