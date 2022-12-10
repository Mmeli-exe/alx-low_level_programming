#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: always return 0 (success)
 */

int main(void)
{
	char  ltr;

	for (ltr = 'z'; ltr >= 'a'; ltr++)
	{
		putchar(ltr);
	}
	putchar('\n');
	return (0);
}
