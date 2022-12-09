#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: always return 0 (success)
 */

int main(void)
{
	char  ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		if (ltr == 'q' || ltr == 'e')
			continue;
		putchar(ltr);
	}
	putchar('\n');
	return (0);
}
