#include "main.h"

/**
 * jack_bauer - world's worst clock
 *Return: nothing
 */

void jack_bauer(void)
{
	int hrs;
	int min;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (min = 0; min < 60; min++)
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
