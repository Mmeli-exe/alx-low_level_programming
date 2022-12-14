#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - counts from a given number to 98
 *
 * @n: the given subery
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 99; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			else
				printf("\n");
		}
	}
	else if (n > 98)
	{
		for (; n > 97; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			else 
				printf("\n");
		}
	}
	else
		printf("%d\n", n);
}
