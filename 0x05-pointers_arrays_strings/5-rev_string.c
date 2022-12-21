#include "main.h"

/**
 * rev_string - reverses the string
 * @s: a pointer to the char array
 * Return: nothing
 */

void rev_string(char *s)
{
	int front, back;
	char tmp;

	front = 0;
	back = 0;
	while (s[back + 1] != '\0')
		back++;
	while (front < back)
	{
		tmp = s[front];
		s[front] = s[back];
		s[back] = tmp;
		front++;
		back--;
	}
}
