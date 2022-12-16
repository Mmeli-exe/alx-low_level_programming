#include <stdio.h>

/**
 * main - fizzbuzz test
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num > 1)
			printf(" ");
		if  (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", num);
	}
	printf("\n");
	return (0);
}
