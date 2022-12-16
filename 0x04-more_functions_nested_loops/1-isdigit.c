#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: character input to be tested
 * Return: 1 if digit or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
