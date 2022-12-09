#include <stdio.h>

/**
 * main - function prints sizes of data types
 * Return: Always return 0 (success)
 */
int main(void)
{
	char size_char = sizeof(char);
	char size_int = sizeof(int);
	char size_ll_int = sizeof(long long);
	char size_long_int = sizeof(long);
	char size_float = sizeof(float);

	printf("Size of a char: %d byte(s)\n", size_char);
	printf("Size of an int: %d byte(s)\n", size_int);
	printf("Size of a long int: %d byte(s)\n", size_long_int);
	printf("Size of a long long int: %d byte(s)\n", size_ll_int);
	printf("Size of a float: %d byte(s)\n", size_float);
	return (0);
}
