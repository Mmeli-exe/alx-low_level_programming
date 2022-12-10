#include <stdio.h>

/**
 * main - prints the double digit numbers
 * Return: always return 0 (success)
 */

int main(void)
{
	int set0;
	int set1;

	for (set0 = 0; set0 < 100; set0++)
	{
		for (set1 = set0 + 1; set1 < 100; set1++)
		{
			putchar((set0 / 10) + 48);
			putchar((set0 % 10) + 48);
			putchar(32);
			putchar((set1 / 10) + 48);
			putchar((set1 % 10) + 48);
			if (set1 != 99 || set0 != 98)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
