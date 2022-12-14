#include "main.h"

/**
 * _abs - converts to absolute value
 * @c: character input to be tested
 * Return: absolute value
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (0 - c);
	}
	else
	{
		return (c);
	}
}
