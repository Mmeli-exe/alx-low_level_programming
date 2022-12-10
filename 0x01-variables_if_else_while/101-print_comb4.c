#include <stdio.h>

/**
 * main - prints the double digit numbers
 * Return: always return 0 (success)
 */

int main(void)
{
	int hunds;
	int tens;
	int units;
	for (hunds = 0; hunds < 10; hunds++)
	{
		for (tens = hunds + 1; tens < 10; tens++)
		{
			for (units = tens + 1; units < 10; units++)
			{
				putchar(hunds + 48);
				putchar(tens + 48);
				putchar(units + 48);
				if (units != 9 || tens != 8 || hunds != 7)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
