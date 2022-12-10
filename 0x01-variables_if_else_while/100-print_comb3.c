#include <stdio.h>

/**
 * main - prints the double digit numbers
 * Return: always return 0 (success)
 */

int main(void)
{
	int tens;
	int units;

	for (tens = 0; tens < 10; tens++)
	{
		for (units = tens + 1; units < 10; units++)
		{
			putchar(tens + 48);
			putchar(units + 48);
			if (num < 9)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
