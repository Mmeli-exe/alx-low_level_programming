#include <stdio.h>

/**
 * main - prints the single numbers
 * Return: always return 0 (success)
 */

int main(void)
{
	int  num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + 48);
	}
	putchar('\n');
	return (0);
}
