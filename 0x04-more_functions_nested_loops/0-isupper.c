#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: character input to be tested
 * Return: 1 if uppercase or 0
 */

int _isuppr(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
