#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - determines and prints the sign of a random number
 * Return: always return 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < o)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);

}
