#include <stdio.h>

/**
 * main - prints the single digit numbers
 * Return: always return 0 (success)
 */

int main(void)
{
	int  num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + 48);
		if (num < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
