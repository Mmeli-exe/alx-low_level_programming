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
		printf("%d", num);
	}
	printf('\n');
	return (0);
}
