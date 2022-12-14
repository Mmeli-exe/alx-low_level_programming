#include "main.h"

/**
 * _isLower - checks for lowercase letters
 * @c: character input to be tested
 * Return: 1 if lowercase or 0
 */

int _isLower(int c)
{
	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
