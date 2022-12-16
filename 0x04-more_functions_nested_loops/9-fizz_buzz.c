#include <stdio.h>

/**
 * main - fizz buzz test
 * Return: Always 0
 */

void main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num > 1)
			printf(" ");
		switch (num)
		{
		case (num % 3 == 0 && num % 5 == 0):
			printf("FizzBuzz");
			break;
		case (num % 3 == 0):
			printf("Fizz");
			break;
		case (num % 5 == 0):
			printf("Buzz");
			break;
		default
			printf("%d", num);
		}
}

