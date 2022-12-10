#include <stdio.h>

/**
 * main - prints the the hexadecimals
 * Return: always return 0 (success)
 */

int main(void)
{
	char  ltr;

	for (ltr = '0'; ltr <= '9'; ltr++)
	{
		putchar(ltr);
	}
	for (ltr = 'a'; ltr <= 'f'; ltr++)
	{
		putchar(ltr);
	}
	putchar('\n');
	return (0);
}
