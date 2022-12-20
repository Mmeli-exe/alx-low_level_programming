#include "main.h"

/**
 * swap_int - trades the integer values of variables
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
