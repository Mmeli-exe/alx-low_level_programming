#include "main.h"

/**
 * _atoi - extract signed int from string
 * @s: string source
 * Return: integer value
 */

int _atoi(char *s)
{
	int idx = 0;
	int out = 0;
	int nz = 0;
	int sign = 0;

	while (s[idx] != '\0')
	{
		if (nz != 0 && !('0' <= s[idx] && s[idx] <= '9'))
			break;
		if (nz == 0 && s[idx] == '-')
			sign++;
		if (nz != 0 && '0' <= s[idx] && s[idx] <= '9')
		{
			out *= 10;
			out += s[idx] - 48;
		}
		if (nz == 0 && '0' < s[idx] && s[idx] <= '9')
		{
			nz++;
			out = s[idx] - 48;
			if (nz % 2 == 1)
				out *= -1;
		}
		idx++;
	}
	return (out);
}
