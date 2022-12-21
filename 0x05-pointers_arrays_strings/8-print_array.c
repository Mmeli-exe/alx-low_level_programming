#include <stdio.h>
#include "main.h"

/**
 * print_array - print n values of an array
 * @a: source array
 * @n: number of values for be printed
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", a[idx]);
		if ((idx + 1) < n)
			printf(", ");
	}
	printf("\n");
}
