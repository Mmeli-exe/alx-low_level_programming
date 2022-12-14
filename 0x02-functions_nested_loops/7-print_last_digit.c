#include "main.h"

/**
 * print_last_digit - print last digit of n
 * @n: source number
 * Return: last digit
 */

int print_last_digit(int n)
{
	n = _abs(n);
	return (n % 10);
}
