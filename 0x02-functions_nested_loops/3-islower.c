#include "main.h"

/**
 * _islower - checks for lowercase letters
 * @c: character input to be tested
 * Return: 1 if lowercase or 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
