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
		putchar(num);
	}
	putchar('\n');
	return (0);
}
