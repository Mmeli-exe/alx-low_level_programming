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
	int sign = 0;

	while (s[idx] != '\0')
	{
		if (s[idx] == '-')
			sign++;
		if ('0' < s[idx] && s[idx] <= '9')
			break;
		idx++;
	}

	if (s[idx] == '\0')
		return (0);

	switch (sign % 2)
	{
		case (0):
			out = s[idx] - 48;
			idx++;
			while (s[idx] != '\0' && '0' <= s[idx] && s[idx] <= '9')
			{
				out *= 10;
				out += s[idx] - 48;
				idx++;
			}
			break;
		case (1):
			out = -(s[idx] - 48);
			idx++;
			while (s[idx] != '\0' && '0' <= s[idx] && s[idx] <= '9')
			{
				out *= 10;
				out -= (s[idx] - 48);
				idx++;
			}
			break;
	}
	return (out);
}
