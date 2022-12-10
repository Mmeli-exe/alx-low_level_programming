#include <stdio.h>

/**
 * main - prints the single digit numbers
 * Return: always return 0 (success)
 */

int main(void)
{
	char  num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + 48);
		if (num < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar("\n");
	return (0);
}
